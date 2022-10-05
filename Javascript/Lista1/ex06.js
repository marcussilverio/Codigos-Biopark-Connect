/* 
    6.A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: 
    lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros. 
    Se um comerciante compra uma determinada quantidade de cada formato, 
    faça um algoritmo para calcular quantos litros de refrigerante ele comprou.
*/
const lata = 350;
const garrafa = 600;
const litro = 2000;


function qtdRefrigerante(qtdLatas=0, qtdGarrafas=0, qtdLitros=0){
    return (qtdLatas*lata+qtdGarrafas*garrafa+qtdLitros*litro)/1000;
}

console.log(qtdRefrigerante(20, 10, 1)+' Litros');