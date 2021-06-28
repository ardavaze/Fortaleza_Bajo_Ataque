IF OBJECT_ID('dbo.USER', 'U') IS NOT NULL
	DROP TABLE dbo.USE
GO
CREATE TABLE USER (
	id INT IDENTITY(1,1) NOT NULL PRIMARY KEY,
	username VARCHAR(100) UNIQUE NOT NULL,
	password VARCHAR(100) NOT NULL,
	first_name VARCHAR(100) NOT NULL,
	last_name VARCHAR(100) NOT NULL,
	gender CHAR(1) NULL,
	document_type CHAR(1) NOT NULL,
	document_number VARCHAR(15) NOT NULL UNIQUE,
	phone_number VARCHAR(50) NULL,
	address VARCHAR(150) NULL,
	email VARCHAR(150) NOT NULL UNIQUE,	
	birthday DATE NULL,
	status CHAR(1) NULL
)
GO