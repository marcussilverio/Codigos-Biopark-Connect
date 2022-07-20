#include <stdio.h>
/*
    Crie um programa que leia um vetor de 20 posições e informe:  
    a) Quantos números pares existem no vetor 
    b) Quantos números ímpares existem no vetor 
    c) Quantos números maiores do que 50 
    d) Quantos números menores do que 7

*/
int main(){

    int vet[20], par =0, impar =0, maiorq50 =0, menorq7 = 0, i;

    printf("Vetor: \n");
    for(i = 0; i<20 ; i++){
        printf("%d: ", i);
        scanf("%d", &vet[i]);
    }
    printf("Calculando...\n");
    for (i=0; i<20; i++){
        if(vet[i]%2==0){
            par++;
        }else{
            impar++;
        }
        if(vet[i] > 50)
            maiorq50++;
        if(vet[i]< 7)
            menorq7++;
    }
    printf("Numeros pares: %d\nNumeros impares: %d\nMaiores que 50: %d\nMenores que 7: %d\n", par, impar, maiorq50, menorq7);

    return 0;
}