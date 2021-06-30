IF OBJECT_ID('dbo.SURVIVAL', 'U') IS NOT NULL
	DROP TABLE dbo.SURVIVAL
GO
IF OBJECT_ID('dbo.USER_FBA', 'U') IS NOT NULL
	DROP TABLE dbo.USER_FBA
GO
CREATE TABLE USER_FBA (
	id INT IDENTITY(1,1) NOT NULL PRIMARY KEY,
	nickname VARCHAR(100) UNIQUE NOT NULL,
	password VARCHAR(100) NOT NULL,
	name VARCHAR(100) NOT NULL,
	lastNameFath VARCHAR(100) NOT NULL,
	lastNameMoth VARCHAR(100) NOT NULL,
	birthday VARCHAR(100) NOT NULL,
	email VARCHAR(100) NOT NULL,
	rank VARCHAR(100) NOT NULL,
	avatar VARCHAR(100) NOT NULL,
	experience INT NOT NULL,
	emerald INT NULL,
	level INT NULL,
)
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddUser]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddUser]
END
GO
CREATE PROCEDURE dbo.usp_AddUser(
	@vnickname VARCHAR(100),
	@vpassword VARCHAR(100),
	@vname VARCHAR(100),
	@vlastNameFath VARCHAR(100),
	@vlastNameMoth VARCHAR(100),
	@vbirthday VARCHAR(100),
	@vemail VARCHAR(100),
	@vrank VARCHAR(100),
	@vavatar VARCHAR(100),
	@iexperience INT,
	@iemerald INT,
	@ilevel INT,
	@iid INT OUT
 ) AS 
	BEGIN
		INSERT INTO USER_FBA(nickname, password, name, lastNameFath, lastNameMoth, birthday, 
								email, rank, avatar, experience, emerald, level)
		SELECT 	@vnickname, @vpassword, @vname, @vlastNameFath, @vlastNameMoth, @vbirthday, 
				@vemail, @vrank, @vavatar, @iexperience, @iemerald, @ilevel

		SET @iid = SCOPE_IDENTITY()	
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateUser]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateUser]
END
GO
CREATE PROCEDURE dbo.usp_UpdateUser(
	@vnickname VARCHAR(100),
	@vpassword VARCHAR(100),
	@vname VARCHAR(100),
	@vlastNameFath VARCHAR(100),
	@vlastNameMoth VARCHAR(100),
	@vbirthday VARCHAR(100),
	@vemail VARCHAR(100),
	@vrank VARCHAR(100),
	@vavatar VARCHAR(100),
	@iexperience INT,
	@iemerald INT,
	@ilevel INT,
	@iid INT
 ) AS 
	BEGIN
		UPDATE USER_FBA
		SET nickname=@vnickname, password=@vpassword, name=@vname, lastNameFath=@vlastNameFath, lastNameMoth=@vlastNameMoth, birthday=@vbirthday, 
				email=@vemail, rank=@vrank, avatar=@vavatar, experience=@iexperience, emerald=@iemerald, level=@ilevel
		WHERE id=@iid
	END
GO
CREATE TABLE SURVIVAL (
	id INT IDENTITY(1,1) NOT NULL PRIMARY KEY,
	id_User INT NOT NULL FOREIGN KEY REFERENCES USER_FBA(id) , 
	unspentGold INT NOT NULL,
	unitsDeployed INT NOT NULL,
	unitsDefeated INT NOT NULL,
	date VARCHAR(100) NOT NULL,
	rank VARCHAR(100) NOT NULL,
	timeMax INT NOT NULL,
)
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddSurvival]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddSurvival]
END
GO
CREATE PROCEDURE dbo.usp_AddSurvival(
	@iid_User INT ,
	@iunspentGold INT,
	@iunitsDeployed INT,
	@iunitsDefeated INT,
	@vdate VARCHAR(100) ,
	@vrank VARCHAR(100),
	@itimeMax INT ,
	@iid INT OUT
 ) AS 
	BEGIN
		INSERT INTO SURVIVAL(id_User, unspentGold, unitsDeployed, unitsDefeated, date, rank, 
								timeMax)
		SELECT 	@iid_User, @iunspentGold, @iunitsDeployed, @iunitsDefeated, @vdate, @vrank, 
				@itimeMax

		SET @iid = SCOPE_IDENTITY()	
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateSurvival]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateSurvival]
END
GO
CREATE PROCEDURE dbo.usp_UpdateSurvival(
	@iid_User INT ,
	@iunspentGold INT,
	@iunitsDeployed INT,
	@iunitsDefeated INT,
	@vdate VARCHAR(100) ,
	@vrank VARCHAR(100),
	@itimeMax INT ,
	@iid INT
 ) AS 
	BEGIN
		UPDATE SURVIVAL
		SET id_User=@iid_User, unspentGold=@iunspentGold, unitsDeployed=@iunitsDeployed, unitsDefeated=@iunitsDefeated, date=@vdate, rank=@vrank, 
				timeMax=@itimeMax
		WHERE id=@iid
	END
GO