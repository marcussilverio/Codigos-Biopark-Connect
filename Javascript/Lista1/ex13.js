/*
    13.Faça um algoritmo que receba duas notas, calcule e mostre a média 
    ponderada dessas notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.
*/

function media(valor1=0, valor2=0){
    return (valor1*2 + valor2*3)/5;
}
console.log(media(10,10))