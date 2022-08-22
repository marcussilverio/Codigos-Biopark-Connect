-- 1 Selecione o nome de todos os estilos de livros em ordem alfabética.
    SELECT nome 
    FROM estilo 
    ORDER BY nome;
-- 2 Selecione o nome de todos os autores em ordem alfabética decrescente.
    SELECT nome 
    FROM autor 
    ORDER BY nome DESC;
-- 3 Selecione o nome e o telefone de todas as editoras.
    SELECT nome, telefone 
    FROM editora;
-- 4 Selecione o nome de todas as editoras.
    SELECT nome 
    FROM editora;
-- 5 Selecione em ordem alfabética decrescente os estilos de livros.
    SELECT nome 
    FROM estilo 
    ORDER BY nome DESC;
-- 6 Selecione o estilo de código 3.
    SELECT * 
    FROM estilo 
    WHERE id_estilo = 3;
-- 7 Selecione o autor de código 1.
    SELECT * 
    FROM estilo 
    WHERE id_estilo = 1;
-- 8 Selecione a editora de código 4.
    SELECT * 
    FROM estilo 
    WHERE id_estilo = 4;
-- 9 Selecione os títulos dos livros e os respectivos nomes das editoras.
    SELECT livro.titulo, editora.nome  
    FROM livro 
    INNER JOIN editora ON livro.id_editora = editora.id_editora;
-- 10 Selecione os títulos do livro, os respectivos nomes das editoras que começam com a letra A.
    SELECT livro.titulo, editora.nome  
    FROM livro 
    INNER JOIN editora ON livro.id_editora = editora.id_editora WHERE editora.nome LIKE 'a%';
-- 11 Consultar titulo livro, nome editora, nome estilo e nome autor;
    SELECT livro.titulo, editora.nome as nome_editora, estilo.nome as nome_estilo, autor.nome as nome_autor 
    FROM livro
    INNER JOIN editora ON livro.id_editora = editora.id_editora
    INNER JOIN estilo ON livro.id_estilo = estilo.id_estilo
    INNER JOIN autor ON livro.id_autor = autor.id_autor;
-- 12 Consultar titulo livro, nome editora. Onde o telefone da editora seja igual a 12345
    SELECT livro.titulo, editora.nome as nome_editora FROM editora
    INNER JOIN livro ON livro.id_editora = editora.id_editora 
    WHERE editora.telefone = '12345';
-- 13 Consultar titulo livro, nome autor. Onde autor tenha idade igual a 35
    SELECT livro.titulo, autor.nome as nome_autor FROM autor
    INNER JOIN livro ON livro.id_autor = autor.id_autor 
    WHERE autor.idade = 35 ;
-- 14 Consultar titulo livro, nome autor e editora. Onde autor tenha o nome de Dan Brown
    SELECT livro.titulo, autor.nome as nome_autor, editora.nome as nome_editora FROM livro
    INNER JOIN autor ON livro.id_autor = autor.id_autor
    INNER JOIN editora ON editora.id_editora = livro.id_editora
    WHERE autor.nome = 'Dan Brown';
-- 15 Consultar titulo livro, nome autor e editora. Onde autor tenha o nome de Dan Brown e idade igual a 35
    SELECT livro.titulo, autor.nome as nome_autor, editora.nome as nome_editora FROM livro
    INNER JOIN autor ON livro.id_autor = autor.id_autor
    INNER JOIN editora ON editora.id_editora = livro.id_editora
    WHERE autor.nome = 'Dan Brown' AND autor.idade = 35;
-- 16 Consultar titulo livro, nome autor e editora. Onde autor tenha o nome de Dan Brown ou editora com o telefone igual a 123345;
    SELECT livro.titulo, autor.nome as nome_autor, editora.nome as nome_editora FROM livro
    INNER JOIN autor ON livro.id_autor = autor.id_autor
    INNER JOIN editora ON editora.id_editora = livro.id_editora
    WHERE autor.nome = 'Dan Brown' OR editora.telefone = '123345';
-- 17 Consulta titulo livro, nome estilo dos livros do estilo Romance;
    SELECT livro.titulo, estilo.nome as nome_estilo FROM livro
    INNER JOIN estilo ON livro.id_estilo = estilo.id_estilo
    WHERE estilo.nome = 'Romance';
-- 18 Consulta titulo livro, nome estilo dos livros da editora Globo
    SELECT livro.titulo, estilo.nome as nome_estilo FROM livro
    INNER JOIN estilo ON livro.id_estilo = estilo.id_estilo
    INNER JOIN editora ON livro.id_editora = editora.id_editora
    WHERE editora.nome = 'Globo';
-- 19 Faça uma consulta para retornar informações de três tabelas diferentes:
    --Atributo título da tabela livro.
    --Atributo nome da tabela editora.
    --Atributo nome da tabela autor.
    SELECT livro.titulo, editora.nome as nome_editora, autor.nome as nome_autor
    FROM livro
    INNER JOIN editora ON livro.id_editora=editora.id_editora
    INNER JOIN autor ON livro.id_autor=autor.id_autor;