/*
    16.Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre: 
        a.o novo peso se a pessoa engordar 15% sobre o peso digitado;
        b.o novo peso se a pessoa emagrecer 20% sobre o peso digitado.
*/

function calculaPeso(peso){
    console.log('Peso se engordar:',peso*1.15);
    console.log('Peso se emagrecer:',peso*0.8);
}
calculaPeso(10)