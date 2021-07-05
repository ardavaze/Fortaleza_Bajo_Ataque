INSERT INTO USER_FBA(nickname,password,name,lastNameFath,lastNameMoth,birthday,rank,avatar,email,experience,emerald,level) 
VALUES ('Ardavaze','password','Danny','Valdivieso','Zavala','05/10/2000','Colonel','Avatar1','dan05102@gmail.com',0,0,14)
GO
INSERT INTO USER_FBA(nickname,password,name,lastNameFath,lastNameMoth,birthday,rank,avatar,email,experience,emerald,level) 
VALUES ('Rovenegas','password','Roger','Cabello','Venegas','11/06/2000','Captain','Avatar2','a20171555@pucp.edu.pe',0,0,1)
GO
INSERT INTO USER_FBA(nickname,password,name,lastNameFath,lastNameMoth,birthday,rank,avatar,email,experience,emerald,level) 
VALUES ('george','123456','aea','mendoza','zambrano','a','General','Avatar3','a',0,0,16)
GO
--INSERT INTO USER_FBA(nickname,password,name,lastNameFath,lastNameMoth,birthday,rank,avatar,email,experience,emerald,level) 
--VALUES ('Ardavaze','password','Danny','Valdivieso','Zavala','05/10/2000','Colonel','Avatar1','dan05102@gmail.com',0,0,1)
--GO
--INSERT INTO USER_FBA(nickname,password,name,lastNameFath,lastNameMoth,birthday,rank,avatar,email,experience,emerald,level) 
--VALUES ('Ardavaze','password','Danny','Valdivieso','Zavala','05/10/2000','Colonel','Avatar1','dan05102@gmail.com',0,0,1)
--GO
INSERT INTO SURVIVAL(id_User, unspentGold, unitsDeployed, unitsDefeated, 
						date, rank, timeMax)
VALUES (1,200,20,10,'05/10/2021','Colonel',60)
GO
INSERT INTO SURVIVAL(id_User, unspentGold, unitsDeployed, unitsDefeated, 
						date, rank, timeMax)
VALUES (2,100,10,15,'11/06/2021','Captain',40)
GO
INSERT INTO SURVIVAL(id_User, unspentGold, unitsDeployed, unitsDefeated, 
						date, rank, timeMax)
VALUES (3,50,5,30,'10/05/2021','General',60)
GO
SELECT * FROM USER_FBA
GO
SELECT * FROM SURVIVAL
GO
Select a.id,a.nickname,a.name,a.lastNameFath,a.lastNameMoth,a.rank,a.avatar,a.experience,a.emerald,a.level,b.id,b.unspentGold,b.unitsDeployed,b.unitsDefeated,b.date,b.rank,b.timeMax 
FROM USER_FBA as a inner join SURVIVAL as b on a.id=b.id_User
GO
Execute dbo.usp_QueryAllSurvival
GO
select Max(b.timeMax) as timeMax from USER_FBA as a inner join SURVIVAL as b on a.id=b.id_User
where a.id=5
Group by a.id
