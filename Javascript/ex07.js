/*
    7.Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. 
    Faça um algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total 
    economizado, em reais. Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda 
    moedas de 1 real. Não havendo moeda de um tipo, a quantidade respectiva é zero. 
*/
const moedaDe1 = 1;
const moedaDe5 = 5;
const moedaDe10 = 10;
const moedaDe25 = 25;
const moedaDe50 = 50;
const moedaDe100 = 100;

function valorTotal(qtMoeda100=0, qtMoeda50=0, qtMoeda25=0, qtMoeda10=0, qtMoeda5=0, qtMoeda1=0){
    return (qtMoeda1*moedaDe1 + qtMoeda5*moedaDe5 + qtMoeda10*moedaDe10 + qtMoeda25*moedaDe25 + qtMoeda50*moedaDe25 + qtMoeda100*moedaDe100)/100;
}

console.log(valorTotal(5, 2, 5, 1, 4))
console.log(valorTotal())