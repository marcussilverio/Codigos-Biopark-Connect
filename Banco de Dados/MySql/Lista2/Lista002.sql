-- 01 - Criando banco de dados `lista001`
CREATE DATABASE lista002
    DEFAULT CHARACTER SET = 'utf8mb4';
-- 02 - Criando tabela `lista001`.`alunos`
CREATE TABLE aluno(  
    id int NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    telefone VARCHAR(50) NOT NULL,
    cidade VARCHAR(50) NOT NULL
) DEFAULT CHARSET UTF8;
-- 03 - Usando o comando Desc alunos para verificar a tabela
DESC `lista002`.`aluno`
-- 04 - Criando tabela `lista001`.`aluno2`
CREATE TABLE aluno2(  
    id int NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(200) NOT NULL,
    telefone VARCHAR(50) NOT NULL,
    cidade VARCHAR(100) NOT NULL
) DEFAULT CHARSET UTF8;
-- 05 - Criando tabela funcionario
CREATE TABLE funcionario(  
    id int NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    endereco VARCHAR(50) NOT NULL,
    telefone VARCHAR(50) NOT NULL,
    cidade VARCHAR(100) NOT NULL,
    estado VARCHAR(20) NOT NULL,
    cep VARCHAR(9) NOT NULL,
    rg VARCHAR(10) NOT NULL,
    cpf CHAR(11) NOT NULL UNIQUE,
    salario DECIMAL(10,2) NOT NULL
) DEFAULT CHARSET UTF8;
-- 06 - Criando tabela fornecedor
CREATE TABLE fornecedor(  
    id int NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    endereco VARCHAR(50) NOT NULL,
    telefone VARCHAR(50) NOT NULL,
    cidade VARCHAR(100) NOT NULL,
    estado VARCHAR(20) NOT NULL,
    cep VARCHAR(9) NOT NULL,
    cnpj VARCHAR(20) NOT NULL,
    email VARCHAR(50) NOT NULL
) DEFAULT CHARSET UTF8;
-- 07 - Criando a tabela livro
CREATE TABLE livro(  
    id int NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    categoria VARCHAR(50) NOT NULL,
    resumo VARCHAR(140),
    preco_custo DECIMAL(10,2) NOT NULL,
    preco_venda DECIMAL(10,2) NOT NULL
) DEFAULT CHARSET UTF8;
-- 08 - Analisar a estrutura das tabelas 
DESC aluno;
DESC aluno2;
DESC fornecedor;
DESC funcionario;
DESC livro;
-- 09 - Criando a tabela estoque
CREATE TABLE estoque(  
    id int NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome_produto VARCHAR(50) NOT NULL,
    categoria VARCHAR(50) NOT NULL,
    quantidade INT NOT NULL,
    fornecedor VARCHAR(50)
) DEFAULT CHARSET UTF8;
-- 10 - Criando a tabela notas
CREATE TABLE notas(  
    id int NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome_aluno VARCHAR(50) NOT NULL,
    bimestre VARCHAR(50) NOT NULL
) DEFAULT CHARSET UTF8;
-- 11 - Criando a tabela caixa e tabela contasAPagar
CREATE TABLE caixa(  
    id int NOT NULL PRIMARY KEY AUTO_INCREMENT,
    data_compra DATETIME NOT NULL,
    descricao VARCHAR(150),
    debito BOOLEAN NOT NULL,
    credito BOOLEAN NOT NULL
) DEFAULT CHARSET UTF8;
CREATE TABLE contasAPagar(  
    id int NOT NULL PRIMARY KEY AUTO_INCREMENT,
    data_conta DATETIME NOT NULL,
    descricao VARCHAR(150),
    valor DECIMAL(10,2) NOT NULL,
    data_pagamento DATETIME NOT NULL
) DEFAULT CHARSET UTF8;
-- 12 - Criando tabela contasAReceber
CREATE TABLE contasAReceber(  
    id int NOT NULL PRIMARY KEY AUTO_INCREMENT,
    data_conta DATETIME NOT NULL,
    descricao VARCHAR(150),
    valor DECIMAL(10,2) NOT NULL,
    data_pagamento DATETIME NOT NULL
) DEFAULT CHARSET UTF8;
-- 13 - Criando tabela filme
CREATE TABLE filme(  
    id int NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    sinopse VARCHAR(200) NOT NULL,
    categoria VARCHAR(50) NOT NULL,
    diretor VARCHAR(50) NOT NULL
) DEFAULT CHARSET UTF8;
-- 14 - Criando tabela CD
CREATE TABLE cd(  
    id int NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    cantor VARCHAR(50) NOT NULL,
    ano DATETIME NOT NULL,
    quantidadeMusica INT UNSIGNED NOT NULL
) DEFAULT CHARSET UTF8;
-- 15 - Excluindo a tabela alunos
DROP TABLE aluno2;
-- 16 - Comando desc para ver se foi excluido corretamente
DESC aluno2;
-- 17 - Excluindo a tabela livros
DROP TABLE livro;
-- 18 - Excluindo a tabela ContasAPagar
DROP TABLE contasAPagar;
-- 19 - Excluindo a tabela ContasAReceber
DROP TABLE contasAReceber;
-- 20 - Excluindo a tabela filmes
DROP TABLE filme;
-- 21 - Listando algumas tabelas
DESC aluno;
DESC caixa; 
DESC estoque;
DESC fornecedor;
-- 22 - Mudando nome de tabelas
ALTER TABLE `lista002`.`aluno` RENAME TO super_aluno;
-- 23 - Checar se foi feita a mudança
DESC super_aluno;
-- 24 - Alterar o nome da tabela estoque para produto
ALTER TABLE `lista002`.`estoque` RENAME TO produto;
-- 25 - Alterar o nome da tabela notas para aprovados
ALTER TABLE `lista002`.`notas` RENAME TO aprovados;
-- 26 - Alterar o nome da tabela aprovados para notas
ALTER TABLE `lista002`.`aprovados` RENAME TO notas;
-- 27 - Excluir a tabela dinheiro
DROP TABLE dinheiro;
-- 28 - Excluir a tabela notas
DROP TABLE notas;
-- 29 - Alterar o nome da tabela super_aluno para aluno
ALTER TABLE `lista002`.`super_aluno` RENAME TO aluno;
-- 30 - Alterar o nome da tabela aluno para estudante
ALTER TABLE `lista002`.`aluno` RENAME TO estudante;
-- 31 - Alterar o nome da tabela estudante para super_estudante

ALTER TABLE `lista002`.`estudante` RENAME TO super_estudante;
-- 32 - Verificar a alteração na tabela super_estudante
DESC super_estudante;
-- 33 - Excluir a tabela super_estudante
DROP TABLE super_estudante;
-- 34 - Verificar a tabela aluno e super_estudante
DESC aluno;
DESC super_estudante;
-- 35 - Adicionar coluna estado na tabela aluno (ja foi excluida, mas o comando seria esse)
ALTER TABLE aluno ADD COLUMN estado VARCHAR(20) NOT NULL;
-- 36 - Criando nova tabela caixa2
CREATE TABLE caixa2(  
    id int NOT NULL PRIMARY KEY AUTO_INCREMENT,
    data_compra DATETIME NOT NULL,
    descricao VARCHAR(150),
    debito BOOLEAN NOT NULL,
    credito BOOLEAN NOT NULL
) DEFAULT CHARSET UTF8;
-- 37 - Adicionando o campo observacao na tabela caixa
ALTER TABLE caixa ADD COLUMN observacao VARCHAR(150) NOT NULL;
ALTER TABLE caixa2 ADD COLUMN observacao VARCHAR(150) NOT NULL;
-- 38 - Adicionando o campo cpf na tabela aluno (ja foi excluido, mas o comando seria esse)
ALTER TABLE aluno ADD COLUMN cpf VARCHAR(11) NOT NULL UNIQUE;
-- 39 - Verificando a estrutura na tabela caixa
DESC caixa;
DESC caixa2;
-- 40 - Adicionando o campo saldo na tabela caixa
ALTER TABLE caixa ADD COLUMN saldo DECIMAL(10,2) NOT NULL;
ALTER TABLE caixa2 ADD COLUMN saldo DECIMAL(10,2) NOT NULL;
