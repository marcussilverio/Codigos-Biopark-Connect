/**
    22.Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário.
*/
function tabuada(numero){
    for(let i=1; i<=10; i++){
        console.log(i, 'x',numero,'=',numero*i);
    }
}
tabuada(5);