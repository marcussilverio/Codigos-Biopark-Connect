-- Criar DATABASE

CREATE DATABASE Revendedora_carros;
USE Revendedora_carros;

-- Criar entidades (Automovel, Cliente, Vendedores, Endereco, Venda)
-- Automovel
CREATE TABLE Automovel(
    RENAVAM CHAR(11) PRIMARY KEY,
    Placa CHAR(7) UNIQUE NOT NULL, 
    Marca VARCHAR(20) NOT NULL,
    Ano_fabricacao YEAR(4) NOT NULL,
    Ano_modelo YEAR(4) NOT NULL,
    Cor INT NOT NULL,
    Motor VARCHAR(20) NOT NULL,
    Num_Portas SMALLINT NOT NULL,
    Tipo_Combustivel VARCHAR(15),
    Preco DECIMAL(10,2) NOT NULL
    ) DEFAULT CHARSET UTF8MB4;

-- Cor do veiculo
CREATE TABLE Cor_veiculo (
    id_cor INT PRIMARY KEY,
    nome VARCHAR(40) NOT NULL
)DEFAULT CHARSET UTF8MB4;

ALTER TABLE `Revendedora_carros`.`Automovel` 
ADD CONSTRAINT `Possui`
FOREIGN KEY (`cor`)
REFERENCES `Revendedora_Carros`.`Cor_veiculo` (`id_cor`)
ON UPDATE NO ACTION
ON DELETE NO ACTION;

-- Clientes
CREATE TABLE Clientes (
    id_Cliente INT PRIMARY KEY,
    Primeiro_Nome VARCHAR(50) NOT NULL,
    Sobrenome VARCHAR(50) NOT NULL,
    Telefone VARCHAR(11) NOT NULL,
    Endereco_cliente INT NOT NULL
) DEFAULT CHARSET UTF8MB4;

CREATE TABLE Endereco(
    id_endereco INT PRIMARY KEY,
    rua VARCHAR(150),
    numero SMALLINT,
    complemento VARCHAR(50),
    bairro VARCHAR(20),
    cidade VARCHAR(30) NOT NULL,
    estado VARCHAR(20) NOT NULL,
    CEP CHAR(8) 
)DEFAULT CHARSET UTF8MB4;

ALTER TABLE `Revendedora_carros`.`clientes`
ADD CONSTRAINT `Reside`
FOREIGN KEY (`Endereco_cliente`)
REFERENCES `Revendedora_carros`.`endereco` (`id_endereco`);

-- Vendedor
CREATE TABLE Vendedores(
    id_vendedor INT PRIMARY KEY,
    Primeiro_Nome VARCHAR(50) NOT NULL,
    Sobrenome VARCHAR(50) NOT NULL,
    Telefone VARCHAR(11) NOT NULL,
    Endereco_vendedor INT NOT NULL,
    Admissao DATE NOT NULL,
    Salario DECIMAL(10,2) NOT NULL
) DEFAULT CHARSET UTF8MB4;

ALTER TABLE `Revendedora_carros`.`Vendedores`
ADD CONSTRAINT `Mora`
FOREIGN KEY (`Endereco_vendedor`)
REFERENCES `Revendedora_carros`.`endereco` (`id_endereco`);

-- Venda
CREATE TABLE Venda(
    id_venda INT PRIMARY KEY,
    data_venda DATETIME NOT NULL,
    valor_venda DECIMAL(10,2) NOT NULL,
    id_comprador INT NOT NULL,
    id_vendedor INT NOT NULL,
    automovel_vendido VARCHAR(11) NOT NULL
) DEFAULT CHARSET UTF8MB4;

ALTER TABLE `Revendedora_carros`.`Venda`
ADD CONSTRAINT `comprou`
FOREIGN KEY (`id_comprador`)
REFERENCES `Revendedora_carros`.`clientes` (`id_cliente`);
ALTER TABLE `Revendedora_carros`.`Venda`
ADD CONSTRAINT `vendeu`
FOREIGN KEY (`id_vendedor`)
REFERENCES `Revendedora_carros`.`vendedores` (`id_vendedor`);
ALTER TABLE `Revendedora_carros`.`Venda`
ADD CONSTRAINT `item`
FOREIGN KEY (`Automovel_vendido`)
REFERENCES `Revendedora_carros`.`Automovel` (`RENAVAM`);


