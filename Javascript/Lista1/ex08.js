/*
    8.Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é 
    suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio 
    no chão, e que você lembre da sua altura, faça um algoritmo para ler os dados 
    necessários e calcular a altura do prédio. 
*/

function alturaPredio(alturaPessoa, sombraPessoa, sombraPredio){
    return (sombraPredio*alturaPessoa)/sombraPessoa;
}

console.log(alturaPredio(1.8, 2, 30))
