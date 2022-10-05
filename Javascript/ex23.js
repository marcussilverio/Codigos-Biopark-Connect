/*
    23.Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    a.a idade dessa pessoa em anos;
    b.a idade dessa pessoa em meses; 
    c.a idade dessa pessoa em dias
    d.a idade dessa pessoa em semanas.
*/
function idade(ano){
    let pessoa={};
    pessoa.anos = 2022-ano;
    pessoa.meses = pessoa.anos*12;
    pessoa.semanas = pessoa.meses*4;
    pessoa.dias = pessoa.meses*30;
    return pessoa;
}
console.table(idade(1993));