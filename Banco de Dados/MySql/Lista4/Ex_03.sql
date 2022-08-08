-- 5 INSERT EM CADA TABELA
-- Tabela Aluno
INSERT INTO alunos (cpf, nome, email, fone, data_nascimento)
    VALUES  ('00000000000','Relampago Marquin','relampago@marquin.com', '0000000000000', STR_TO_DATE('2010-12-21', '%Y-%m-%d')),
            ('11111111111','marco veio','marco@veio.com', '1111111111111', STR_TO_DATE('2011-12-21', '%Y-%m-%d')),
            ('22222222222','aluno 2','email2', '2222222222222', STR_TO_DATE('2012-12-21', '%Y-%m-%d')),
            ('33333333333','aluno 3','email3', '3333333333333', STR_TO_DATE('2013-12-21', '%Y-%m-%d')),
            ('44444444444','aluno 4','email4', '4444444444444', STR_TO_DATE('2014-12-21', '%Y-%m-%d'));
-- Tabela instrutores
INSERT INTO instrutores (nome, email, valor_hora, certificados)
    VALUES  ('instrutor 1','instrutor1@instrutor.com',11,'nenhum1'),
            ('instrutor 2','instrutor2@instrutor.com',12,'nenhum2'),
            ('instrutor 3','instrutor3@instrutor.com',13,'nenhum3'),
            ('instrutor 4','instrutor4@instrutor.com',14,'nenhum4'),
            ('instrutor 5','instrutor5@instrutor.com',15,'nenhum5');
-- Tabela cursos
INSERT INTO cursos (nome, requisito, carga_horaria, preco)
    VALUES  ('curso 1','requisito 1',21 ,121),
            ('curso 2','requisito 2',22 ,122),
            ('curso 3','requisito 3',23 ,123),
            ('curso 4','requisito 4',24 ,124),
            ('curso 5','requisito 5',25 ,125);
-- Tabela turmas

INSERT INTO turmas (instrutores_id, cursos_id, data_inicio, data_final, carga_horaria)
    VALUES  (2, 2, STR_TO_DATE('2010-03-01', '%Y-%m-%d'),STR_TO_DATE('2010-07-01', '%Y-%m-%d'), 150),
            (1, 1, STR_TO_DATE('2010-03-02', '%Y-%m-%d'),STR_TO_DATE('2010-07-02', '%Y-%m-%d'), 150),
            (1, 1, STR_TO_DATE('2010-03-03', '%Y-%m-%d'),STR_TO_DATE('2010-07-03', '%Y-%m-%d'), 150),
            (1, 1, STR_TO_DATE('2010-03-04', '%Y-%m-%d'),STR_TO_DATE('2010-07-04', '%Y-%m-%d'), 150),
            (1, 1, STR_TO_DATE('2010-03-05', '%Y-%m-%d'),STR_TO_DATE('2010-07-05', '%Y-%m-%d'), 150);
-- Tabela matriculas
INSERT INTO matriculas(turmas_id, alunos_id, data_matricula)
    VALUES  (2, 2, STR_TO_DATE('2010-02-01', '%Y-%m-%d')),
            (1, 1, STR_TO_DATE('2010-02-02', '%Y-%m-%d')),
            (1, 1, STR_TO_DATE('2010-02-03', '%Y-%m-%d')),
            (1, 1, STR_TO_DATE('2010-02-04', '%Y-%m-%d')),
            (1, 1, STR_TO_DATE('2010-02-05', '%Y-%m-%d'));

-- Fazer um UPDATE na tabela instrutores, alterando o nome de um dos instrutores(Filtrar pelo id do instrutor)
UPDATE instrutores SET nome='instrutor 2 alterado' WHERE nome = 'instrutor 2';

-- Fazer um UPDATE na tabela instrutores, alterando o e-mail de um dos instrutores(Filtrar pelo nome do instrutor)
UPDATE instrutores SET email='instrutor2alterado@intrutor.com' WHERE nome = 'instrutor 2 alterado';
-- Fazer dois UPDATE na tabela cursos, seguindo a mesma lógica do exercício 2 e 3
UPDATE cursos SET nome='curso 2 alterado' WHERE nome = 'curso 2';
UPDATE cursos SET requisito='requisito 2 alterado' WHERE nome = 'curso 2 alterado';
-- Fazer dois UPDATE na tabela turmas trocando o instrutor de 2 turmas diferentes;
UPDATE turmas SET instrutores_id=2 WHERE id = 2;
UPDATE turmas SET instrutores_id=3 WHERE id = 3;
-- fazer 2 DELETE por tabela do banco de dados
DELETE FROM matriculas WHERE  id = 6;
DELETE FROM matriculas WHERE  alunos_id = 1;
DELETE FROM turmas WHERE  id = 1;
DELETE FROM turmas WHERE  id = 2;

DELETE FROM cursos WHERE id = 3;
DELETE FROM cursos WHERE id = 2;
DELETE FROM instrutores WHERE  id = 4;
DELETE FROM instrutores WHERE  id = 5;
DELETE FROM alunos WHERE id = 4;
DELETE FROM alunos WHERE id = 5;