/*
    3.A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra. 
    Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de um determinado 
    funcionário. Considere que o salário líquido é igual ao salário bruto descontando-se 10% de impostos.
*/
const valHoraNormal = 10;
const valHoraExtra = 15;
function SalarioBruto(horasNormais=0, horasExtras=0){
    return horasNormais * valHoraNormal + horasExtras*valHoraExtra;
}
function SalarioLiquido(salBruto){
    return salBruto*0.90;
}
function Salario(horasNormais=0, horasExtras=0){
    let salario = {};
    salario.bruto = SalarioBruto(horasNormais, horasExtras);
    salario.liquido = SalarioLiquido(salario.bruto);
    return salario;
}

console.table(Salario(100,100))