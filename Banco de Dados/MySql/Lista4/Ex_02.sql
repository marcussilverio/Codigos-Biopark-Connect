-- Criacao do banco
CREATE DATABASE escola
    DEFAULT CHARACTER SET = 'utf8mb4';
use escola;
CREATE TABLE professor(  
    id_professor INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome_professor VARCHAR(150)
) DEFAULT CHARSET UTF8;

CREATE TABLE turma(  
    id_turma INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    descricao_turma VARCHAR(255)
) DEFAULT CHARSET UTF8;
CREATE TABLE professor_turma(  
    id_professor INT NOT NULL,
    id_turma INT NOT NULL,
    CONSTRAINT PROFESSOR_TURMA_FK FOREIGN KEY (id_professor) REFERENCES professor(id_professor),
    CONSTRAINT TURMA_PROFESSOR_FK FOREIGN KEY (id_turma) REFERENCES turma(id_turma),
    PRIMARY KEY(id_professor, id_turma)
) DEFAULT CHARSET UTF8;
CREATE TABLE aluno(  
    id_aluno INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome_aluno VARCHAR(150),
    id_turma INT NOT NULL,
    CONSTRAINT ALUNO_TURMA_FK FOREIGN KEY(id_turma) REFERENCES turma(id_turma)
) DEFAULT CHARSET UTF8;
CREATE TABLE aula(  
    id_aula INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    descricao_aula VARCHAR(255),
    id_professor INT,
    CONSTRAINT PROFESSOR_AULA_FK FOREIGN KEY (id_professor) REFERENCES professor (id_professor)
) DEFAULT CHARSET UTF8;
CREATE TABLE aluno_aula(  
    id_aluno INT NOT NULL,
    id_aula INT NOT NULL,
    CONSTRAINT ALUNO_AULA_FK FOREIGN KEY (id_aluno) REFERENCES aluno(id_aluno),
    CONSTRAINT AULA_ALUNO_FK FOREIGN KEY (id_aula) REFERENCES aula(id_aula),
    PRIMARY KEY(id_aluno, id_aula)
) DEFAULT CHARSET UTF8;
-- Insercao dos dados
INSERT INTO professor(nome_professor) VALUES('Leonardo');
INSERT INTO professor(nome_professor) VALUES('Salsicha');
INSERT INTO turma (descricao_turma) VALUES ('turma 1'); 
INSERT INTO turma (descricao_turma) VALUES ('turma 2');
SELECT * FROM turma, professor;
INSERT INTO professor_turma VALUES (2, 1);
INSERT INTO professor_turma VALUES (1 ,2);
INSERT INTO aluno (nome_aluno, id_turma) VALUES('Zezao', 1);
INSERT INTO aluno (nome_aluno, id_turma) VALUES('Pedin', 1);
INSERT INTO aula (descricao_aula, id_professor) VALUES('aula1', 1);
INSERT INTO aula (descricao_aula, id_professor) VALUES('aula2', 2);
INSERT INTO aluno_aula VALUES(1, 2);
INSERT INTO aluno_aula VALUES(2, 1);
-- Alteracao de dados
UPDATE aluno SET nome_aluno = 'Zezin' WHERE id_aluno = 2;
UPDATE aluno_aula SET id_aluno=1 WHERE id_aluno = 2;
UPDATE aula SET descricao_aula= 'aula 2.1' WHERE id_aula =2;
UPDATE professor SET nome_professor = 'Leandro' WHERE id_professor =2;
UPDATE professor_turma SET id_professor = 1 WHERE id_professor =2 AND id_turma =1;
UPDATE turma SET descricao_turma = 'turma 2.1' WHERE id_turma =2;

-- Remove dados
DELETE FROM aluno_aula WHERE id_aula =2;
DELETE FROM aluno WHERE id_aluno =2;
DELETE FROM professor_turma WHERE id_turma = 2;
DELETE FROM aula WHERE id_aula =2;
DELETE FROM professor WHERE id_professor = 2;
DELETE FROM turma WHERE id_turma = 2;