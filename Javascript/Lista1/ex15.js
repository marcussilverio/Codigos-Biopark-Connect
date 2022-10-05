/*
    15.Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. 
    Faça um algoritmo que receba o salário fixo de um funcionário e o valor de suas vendas, 
    calcule e mostre a comissão e o salário final do funcionário. 
*/

function salarioFinal(salario, vendas){
    return salario + (vendas*0.04);
}

console.log(salarioFinal(1000,100));