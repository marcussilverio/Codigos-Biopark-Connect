/*
    1.A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo,
    uma fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou presunto pesa 
    50 gramas, e que a rodela de hamburguer pesa 100 gramas, faça um algoritmo em que o dono forneça 
    a quantidade de sanduiches a fazer, e a máquina informe as quantidades (em quilos) de queijo, 
    presunto e carne necessários para compra.
*/
const rodHamb = 100;
const fatQueijo = 50;
const fatPresunto = 50;

function LanchoneteGostosura(qntSanduiches){
    kgQueijos = qntSanduiches * fatQueijo / 1000;
    kgPresunto = qntSanduiches * fatPresunto / 1000;
    kgHamb = qntSanduiches * rodHamb / 1000;
    const compra ={kgQueijos, kgPresunto, kgHamb}
    return compra;
}

console.table(LanchoneteGostosura(1));