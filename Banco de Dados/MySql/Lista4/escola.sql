CREATE DATABASE ESCOLA2
     DEFAULT CHARACTER SET = 'utf8mb4';

USE ESCOLA2;
CREATE TABLE
    instrutores (
        id INT NOT NULL AUTO_INCREMENT,
        nome VARCHAR(50) NOT NULL,
        email VARCHAR(50) NOT NULL,
        valor_hora INTEGER NULL,
        certificados VARCHAR(255) NULL,
        PRIMARY KEY(id)
    )DEFAULT CHARSET UTF8MB4;

CREATE TABLE
    cursos (
        id INTEGER NOT NULL AUTO_INCREMENT,
        nome VARCHAR(50) NOT NULL,
        requisito VARCHAR(255) NULL,
        carga_horaria SMALLINT NULL,
        preco DOUBLE NULL,
        PRIMARY KEY(id)
    )DEFAULT CHARSET UTF8MB4;

CREATE TABLE
    alunos (
        id INT NOT NULL AUTO_INCREMENT,
        cpf CHAR(11) NOT NULL,
        nome VARCHAR(50) NOT NULL,
        email VARCHAR(50) NOT NULL,
        fone CHAR(14) NOT NULL,
        data_nascimento DATE NULL,
        PRIMARY KEY(id)
    )DEFAULT CHARSET UTF8MB4;

CREATE TABLE
    turmas (
        id INTEGER NOT NULL AUTO_INCREMENT,
        instrutores_id INT NOT NULL,
        cursos_id INTEGER NOT NULL,
        data_inicio DATE NULL,
        data_final DATE NULL,
        carga_horaria SMALLINT NULL,
        PRIMARY KEY(id),
        INDEX turmas_FKIndex1(cursos_id),
        INDEX turmas_FKIndex2(instrutores_id),
        CONSTRAINT CURSO_TURMA_FK FOREIGN KEY(cursos_id) REFERENCES cursos(id),
        CONSTRAINT INSTRUTOR_TURMA_FK FOREIGN KEY(instrutores_id) REFERENCES instrutores(id)
    )DEFAULT CHARSET UTF8MB4;

CREATE TABLE
    matriculas (
        id INTEGER NOT NULL AUTO_INCREMENT,
        turmas_id INTEGER NOT NULL,
        alunos_id INT NOT NULL,
        data_matricula DATE NULL,
        PRIMARY KEY(id),
        CONSTRAINT ALUNO_MATRICULA_FK FOREIGN KEY(alunos_id) REFERENCES alunos(id),
        CONSTRAINT TURMA_MATRICULA_FK FOREIGN KEY(turmas_id) REFERENCES turmas(id)
    )DEFAULT CHARSET UTF8MB4;