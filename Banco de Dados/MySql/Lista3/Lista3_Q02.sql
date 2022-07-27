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
