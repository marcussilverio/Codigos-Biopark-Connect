-- QUESTAO 01 
-- Criar DATABASE
CREATE DATABASE Clinica;
USE Clinica;

-- criar entidades (Sala, Medicos, Pacientes, Funcionarios e Consultas)
-- Sala
CREATE TABLE Sala(  
    Numero_Sala int NOT NULL UNIQUE PRIMARY KEY CHECK (Numero_Sala > 1 AND Numero_Sala < 50),
    Andar int UNIQUE NOT NULL
) DEFAULT CHARSET UTF8MB4;

--Medicos
CREATE TABLE Medicos (  
    CRM VARCHAR(15) NOT NULL UNIQUE PRIMARY KEY ,
    Nome VARCHAR(40) NOT NULL,
    Idade int CHECK (Idade > 23), 
    Especialidade VARCHAR(20) NOT NULL DEFAULT 'Ortopedia',
    CPF VARCHAR(15) UNIQUE NOT NULL
) DEFAULT CHARSET UTF8MB4;

--Pacientes
CREATE TABLE Pacientes (  
    RG VARCHAR(15) NOT NULL UNIQUE PRIMARY KEY ,
    Nome VARCHAR(40) NOT NULL,
    Data_nascimento DATE, 
    Cidade VARCHAR(30) DEFAULT 'Itabuna',
    Doenca VARCHAR(40) NOT NULL, 
    Plano_saude VARCHAR(20) NOT NULL DEFAULT 'SUS'
) DEFAULT CHARSET UTF8MB4;

-- Funcionarios
CREATE TABLE Funcionarios (  
    Matricula VARCHAR(15) NOT NULL UNIQUE PRIMARY KEY ,
    Nome VARCHAR(40) NOT NULL,
    Data_nascimento DATE NOT NULL, 
    Data_Admissao DATE NOT NULL, 
    Cargo VARCHAR(30) NOT NULL DEFAULT 'Assistente Medico',
    Salario FLOAT NOT NULL DEFAULT 510.00
) DEFAULT CHARSET UTF8MB4;

--Consultas
CREATE TABLE Consultas (  
    Codigo INT NOT NULL UNIQUE PRIMARY KEY ,
    Data_Horario DATETIME
) DEFAULT CHARSET UTF8MB4;

-- RELACIONAMENTOS

-- MEDICOS - SALA
ALTER TABLE `clinica`.`sala` 
ADD COLUMN `medico` VARCHAR(15);

ALTER TABLE `clinica`.`sala` 
ADD CONSTRAINT `Atende`
  FOREIGN KEY (`medico`)
  REFERENCES `clinica`.`medicos` (`CRM`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;
  
-- MEDICOS - CONSULTA
ALTER TABLE `clinica`.`consultas` 
ADD COLUMN `Medico` VARCHAR(15);
ALTER TABLE `clinica`.`consultas` 
ADD CONSTRAINT `Realiza`
  FOREIGN KEY (`Medico`)
  REFERENCES `clinica`.`medicos` (`CRM`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;

--CONSULTA PACIENTE
ALTER TABLE `clinica`.`consultas` 
ADD COLUMN `Paciente` VARCHAR(15);
ALTER TABLE `clinica`.`consultas` 
ADD CONSTRAINT `Faz`
  FOREIGN KEY (`Paciente`)
  REFERENCES `clinica`.`Pacientes` (`RG`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;

-- QUESTAO 02
-- Criar DATABASE
CREATE DATABASE Eleicao;
USE Eleicao;

-- Criar entidades (Cargo, Candidato, Partido, ELeitor, Voto)
-- Cargo
CREATE TABLE Cargo(
    Codigo_Cargo INT UNIQUE NOT NULL PRIMARY KEY,
    Nome_Cargo VARCHAR(30) UNIQUE NOT NULL CHECK(Nome_Cargo != 'Prefeito' AND Nome_Cargo != 'Vereador'),
    Salario FLOAT NOT NULL DEFAULT 17000.00, 
    Numero_Vagas INT UNIQUE NOT NULL
) DEFAULT CHARSET UTF8MB4;

-- Candidato
CREATE TABLE Candidato(
    Numero_Candidato INT UNIQUE NOT NULL PRIMARY KEY,
    Nome VARCHAR(40) UNIQUE NOT NULL,
    Codigo_Cargo INT NOT NULL, 
    Codigo_Partido INT NOT NULL
) DEFAULT CHARSET UTF8MB4;

-- Partido
CREATE TABLE Partido(
    Codigo_Partido INT UNIQUE NOT NULL PRIMARY KEY,
    Sigla VARCHAR(5) UNIQUE NOT NULL,
    Nome VARCHAR(40) UNIQUE NOT NULL, 
    Numero INT UNIQUE NOT NULL
) DEFAULT CHARSET UTF8MB4;

-- Eleitor
CREATE TABLE Eleitor(
    Titulo_Eleitor VARCHAR(30) UNIQUE NOT NULL PRIMARY KEY,
    Zona_Eleitoral CHAR(5) NOT NULL,
    Sessao_Eleitoral CHAR(5) NOT NULL, 
    Nome VARCHAR(40) NOT NULL
) DEFAULT CHARSET UTF8MB4;

-- Voto
CREATE TABLE Voto(
    Titulo_Eleitor VARCHAR(30) UNIQUE NOT NULL PRIMARY KEY,
    Numero_Candidato INT NOT NULL
) DEFAULT CHARSET UTF8MB4;

-- RELACIONAMENTOS

-- CARGO - CANDIDATO
ALTER TABLE `eleicao`.`candidato` 
ADD CONSTRAINT `Possui`
FOREIGN KEY (`Codigo_Cargo`)
REFERENCES `eleicao`.`cargo` (`Codigo_Cargo`)
ON UPDATE NO ACTION
ON DELETE NO ACTION;

-- PARTIDO - CANDIDATO
ALTER TABLE `Eleicao`.`Candidato`
ADD CONSTRAINT `Pertence`
FOREIGN KEY (`Codigo_Partido`)
REFERENCES `Eleicao`.`Partido` (`Codigo_Partido`)
ON UPDATE NO ACTION
ON DELETE NO ACTION;
