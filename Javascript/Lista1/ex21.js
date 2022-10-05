/**
    21.Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, 
    calcule e mostre a quantidade de salários mínimos que ganha esse funcionário. 
*/
function qtSalarioMinimo(salario, vSalarioMinimo){
    return (salario/vSalarioMinimo).toFixed(2);
}

console.log(qtSalarioMinimo(5000,1100),'Salarios minimos');