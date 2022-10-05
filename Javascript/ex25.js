/*
    25.Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa. 
*/
function hipotenusa(catOposto, catAdjacente){
    return Math.sqrt(Math.pow(catAdjacente,2)+Math.pow(catOposto,2));
}
console.log(hipotenusa(3,4))