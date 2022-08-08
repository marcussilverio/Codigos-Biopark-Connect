
-- Criando Database
CREATE DATABASE Controle_de_livros
    DEFAULT CHARACTER SET = 'utf8mb4';
USE Controle_de_livros;

-- Criando tabelas
CREATE TABLE editora(
    id_editora INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome_editora VARCHAR(100) NOT NULL,
    email_editora VARCHAR(100)    
) DEFAULT CHARSET UTF8MB4;
CREATE TABLE livros(  
    id_livros INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    titulo_livros VARCHAR(150) NOT NULL,
    id_editora INT NOT NULL,
    FOREIGN KEY (id_editora) REFERENCES editora(id_editora)
) DEFAULT CHARSET UTF8MB4;
CREATE TABLE autores(
    id_autor INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome_autor VARCHAR (200) NOT NULL,
    telefone_autor VARCHAR(11),
    email_autor VARCHAR(100)
) DEFAULT CHARSET UTF8MB4;
CREATE TABLE categoria(
    id_categoria INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    tipo_categoria VARCHAR(50) NOT NULL UNIQUE
) DEFAULT CHARSET UTF8MB4;
CREATE TABLE livro_autor(
    id_livro INT NOT NULL,
    id_autor INT NOT NULL,
    FOREIGN KEY (id_livro) REFERENCES livros(id_livros),
    FOREIGN KEY (id_autor) REFERENCES autores(id_autor)
) DEFAULT CHARSET UTF8MB4;
CREATE TABLE livro_categoria(
    id_livro INT NOT NULL,
    id_categoria INT NOT NULL,
    FOREIGN KEY (id_livro) REFERENCES livros(id_livros),
    FOREIGN KEY (id_categoria) REFERENCES categoria(id_categoria)
) DEFAULT CHARSET UTF8MB4;

--Insercao de dados
INSERT INTO editora(nome_editora, email_editora)
VALUES ('Intrinseca', 'contato@intrinseca.com.br');
INSERT INTO editora(nome_editora, email_editora) 
VALUES ('Darkside', 'contato@darksidebooks.com.br');
SELECT * FROM editora;
INSERT INTO livros(titulo_livros, id_editora) 
VALUES ('E assim que acaba', 1);
INSERT INTO livros(titulo_livros, id_editora) 
VALUES ('Quando Ninguem Esta Olhando', 1);
INSERT INTO livros(titulo_livros, id_editora) 
VALUES ('Lady killers: Assassinas em serie', 2);

INSERT INTO livros(titulo_livros, id_editora) 
VALUES ('Fragmentos do Horror', 2);
INSERT INTO autores (nome_autor) VALUE ('Collen Hoover');
INSERT INTO autores (nome_autor) VALUE ('Alyssa cole');

INSERT INTO autores (nome_autor) VALUE ('Toru Telfer');
INSERT INTO autores (nome_autor) VALUE ('Junji Ito');
INSERT INTO livro_autor VALUE (1, 1);
INSERT INTO livro_autor VALUE (2, 1);
INSERT INTO livro_autor VALUE (3, 2);
INSERT INTO livro_autor VALUE (4, 2);
INSERT INTO categoria (tipo_categoria) VALUE('Romance');
INSERT INTO categoria (tipo_categoria) VALUE('Suspense');
INSERT INTO categoria (tipo_categoria) VALUE('Horror');
INSERT INTO livro_categoria  VALUE(1,1);

INSERT INTO livro_categoria  VALUE(2,2);
INSERT INTO livro_categoria  VALUE(3,3);

INSERT INTO livro_categoria  VALUE(4,3);
UPDATE autores SET nome_autor = 'Tori Telfer'  WHERE id_autor = 3; 
