/*
    18.Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se que: A = (base maior + base menor)* altura)/2 ; 
*/
function areaTrapezio(bMaior, bMenor, altura){
    return ((bMaior+bMenor)*altura)/2;
}
console.log(areaTrapezio(10,5,3))