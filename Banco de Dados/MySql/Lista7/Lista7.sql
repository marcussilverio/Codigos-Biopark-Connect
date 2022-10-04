-- Active: 1657297827837@@127.0.0.1@3306@controledelivrosfinal
-- 1 - Consultar titulo livro, nome editora, nome estilo e nome autor
SELECT livro.titulo as titulo, editora.nome as editora, estilo.nome as estilo, autor.nome as autor
FROM livro
JOIN livro_estilo ON livro.id_livro = livro_estilo.id_livro
JOIN estilo ON estilo.id_estilo = livro_estilo.id_estilo
JOIN livro_autor ON livro.id_livro = livro_autor.id_livro
JOIN autor ON autor.id_autor = livro_autor.id_autor
JOIN editora ON editora.id_editora = livro.id_editora;
-- 2 - Consultar titulo livro, nome editora. Onde o telefone da editora seja igual a 12345;
SELECT livro.titulo, editora.nome FROM livro
JOIN editora ON livro.id_editora = editora.id_editora
WHERE editora.telefone = "123345";
-- 3 - Consultar titulo livro, nome autor. Onde autor tenha idade igual a 35;
SELECT livro.titulo, autor.nome 
FROM livro
JOIN livro_autor ON livro.id_livro = livro_autor.id_livro
JOIN autor ON livro_autor.id_autor = autor.id_autor
WHERE autor.idade = 35;

-- 4 - Consultar titulo livro, nome autor e editora. Onde autor tenha o nome de Dan Brown;
SELECT livro.titulo, autor.nome, editora.nome as editora 
FROM livro
JOIN livro_autor ON livro.id_livro = livro_autor.id_livro
JOIN autor ON livro_autor.id_autor = autor.id_autor
JOIN editora ON editora.id_editora = livro.id_editora
WHERE autor.nome ="Dan Brown";
-- 5 - Consultar titulo livro, nome autor e editora. Onde autor tenha o nome de Dan Brown e idade igual a 35
SELECT livro.titulo, autor.nome, editora.nome as editora 
FROM livro
JOIN livro_autor ON livro.id_livro = livro_autor.id_livro
JOIN autor ON livro_autor.id_autor = autor.id_autor
JOIN editora ON editora.id_editora = livro.id_editora
WHERE autor.nome ="Dan Brown" AND autor.idade = 35;

-- 6 - Consultar titulo livro, nome autor e editora. Onde autor tenha o nome de Dan Brown e editora com o telefone igual a 123345; 
SELECT livro.titulo, autor.nome, editora.nome as editora 
FROM livro
JOIN livro_autor ON livro.id_livro = livro_autor.id_livro
JOIN autor ON livro_autor.id_autor = autor.id_autor
JOIN editora ON editora.id_editora = livro.id_editora
WHERE autor.nome ="Dan Brown" AND editora.telefone = "123345";
-- 7 - Consulta titulo livro, nome estilo dos livros do estilo Romance;
SELECT livro.titulo, estilo.nome 
FROM livro
JOIN livro_estilo ON livro.id_livro = livro_estilo.id_livro
JOIN estilo ON estilo.id_estilo = livro_estilo.id_estilo
WHERE estilo.nome = "Romance";
-- 8 - Consulta titulo livro, nome estilo dos livros da editora Globo;
SELECT livro.titulo, estilo.nome 
FROM livro
JOIN livro_estilo ON livro.id_livro = livro_estilo.id_livro
JOIN estilo ON estilo.id_estilo = livro_estilo.id_estilo
JOIN editora ON editora.id_editora = livro.id_editora
WHERE editora.nome = "Globo";
-- 9 - Consultar o livro de maior valor;
SELECT livro.titulo, livro.valor
FROM livro
WHERE valor = (SELECT MAX(livro.valor) FROM livro);
-- 10 - Consultar o livro de menor valor;
SELECT livro.titulo, livro.valor
FROM livro
WHERE valor = (SELECT MIN(livro.valor) FROM livro);
-- 11 - Consultar a média de custo do livros;
SELECT AVG(livro.valor)
FROM livro;
-- 12 - Consultar a média de custo dos autores;
SELECT autor.nome, AVG(livro.valor)
FROM livro
JOIN livro_autor ON livro.id_livro = livro_autor.id_livro
JOIN autor ON livro_autor.id_autor = autor.id_autor
GROUP BY autor.id_autor;
-- 13 - Contar o número de livros;
SELECT count(livro.id_livro)
FROM livro;
-- 14 - Consultar a quantidade de livros que editora de id_editora = 2;
SELECT livro.titulo, count(livro.id_livro)
FROM livro
WHERE id_editora = 2;
-- 15 - Consultar quantos livros o id_estilo = 5 possui
SELECT livro.titulo, count(livro.id_livro)
FROM livro
JOIN livro_estilo ON livro.id_livro = livro_estilo.id_livro
JOIN estilo ON estilo.id_estilo = livro_estilo.id_estilo
WHERE estilo.id_estilo = 2;
-- 16 - Selecione os títulos dos livros e os respectivos nomes das editoras.
SELECT livro.titulo, editora.nome as editora
FROM livro
CROSS JOIN editora ON livro.id_editora = editora.id_editora;
-- 17 - Selecione os títulos do livro, os respectivos nomes das editoras que começam com a letra A.
SELECT livro.titulo, editora.nome
FROM livro
JOIN editora ON editora.id_editora = livro.id_editora
WHERE editora.nome LIKE 'A%';
-- 18 Consultar apenas os autores que não possuem nenhum livro;
SELECT autor.nome, count(livro.id_livro)
FROM livro
RIGHT JOIN livro_autor ON livro.id_livro = livro_autor.id_livro
RIGHT JOIN autor ON livro_autor.id_autor = autor.id_autor
GROUP BY autor.nome
HAVING count(livro.id_livro) = 0;
-- 19 - Consultar apenas as editoras que não possuem nenhum livro;
SELECT editora.nome, count(livro.id_livro)
FROM livro
RIGHT JOIN editora ON livro.id_editora = editora.id_editora
GROUP BY editora.nome
HAVING count(livro.id_livro) = 0;
-- 20 - Consultar apenas os estilo que não possuem nenhum livro;
SELECT estilo.nome, count(livro.id_livro)
FROM livro
RIGHT JOIN livro_estilo ON livro.id_livro = livro_estilo.id_livro
RIGHT JOIN estilo ON estilo.id_estilo = livro_estilo.id_estilo
GROUP BY estilo.nome
HAVING count(livro.id_livro) = 0;
-- 21 - Consultar os nomes dos autores e quantos livros cada autor possui;
SELECT autor.nome, count(livro.id_livro) AS 'Quantidade de livros'
FROM livro
RIGHT JOIN livro_autor ON livro.id_livro = livro_autor.id_livro
RIGHT JOIN autor ON livro_autor.id_autor = autor.id_autor
GROUP BY autor.nome;
-- 22 - Consultar os nomes das editoras e quantos livros cada editora possui;
SELECT editora.nome, count(livro.id_livro) AS 'Quantidade de livros'
FROM livro
RIGHT JOIN editora ON livro.id_editora = editora.id_editora
GROUP BY editora.nome;
-- 23 - Consultar os nomes das estilo e quantos livros cada estilo possui;
SELECT estilo.nome, count(livro.id_livro) as 'Quantidade de livros'
FROM livro
RIGHT JOIN livro_estilo ON livro.id_livro = livro_estilo.id_livro
RIGHT JOIN estilo ON estilo.id_estilo = livro_estilo.id_estilo
GROUP BY estilo.nome;
-- 24 - Consultar quantos livros a editora CCCC possui;
SELECT editora.nome, count(id_livro)
FROM livro
RIGHT JOIN editora ON livro.id_editora = editora.id_editora
GROUP BY editora.id_editora;
-- 25 - Consultar quantos livros o autor J R R Tolkien possui;
SELECT autor.nome, count(livro.id_livro)
FROM livro
RIGHT JOIN livro_autor ON livro.id_livro = livro_autor.id_livro
RIGHT JOIN autor ON livro_autor.id_autor = autor.id_autor
WHERE autor.nome='J R R Tolkien';