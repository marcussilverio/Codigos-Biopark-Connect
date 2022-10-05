/*
    24.João recebeu seu salário de RS 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) 
    que estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. 
    Faça um algoritmo que calcule e mostre quanto restará do salário do João 
*/
function salarioRestante(salario, conta1, conta2, multa){
    return salario - (conta1*(1+(multa/100)) + conta2*(1+(multa/100)) );
}   

console.log(salarioRestante(1200, 200, 120, 2));