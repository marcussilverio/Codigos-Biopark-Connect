/*
    9.Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá. 
    Faça um algoritmo para calcular quantos litros de água e de suco são necessários para se 
    fazer X litros de refresco (informados pelo usuário). 
*/
const agua = 0.8;
const suco = 0.2;

function qtdIngredientes(qtdRefresco){
    let refresco = {};
    refresco.agua= qtdRefresco*agua;
    refresco.suco= qtdRefresco*suco;
    return refresco;
}
console.table(qtdIngredientes(1));