#include <stdio.h>
/*
    Escreva um programa que leia dois vetores de 10 posições e faça a soma dos elementos de mesmo índice, 
    colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
*/
int main(){

    int vetA[10], vetB[10],vetorSoma[10], i;

    printf("Vetor um: \n");
    for(i =0; i< 10 ; i++){
        scanf("%d", &vetA[i]);
    }
    printf("Vetor dois: \n");
    for(i =0; i< 10 ; i++){
        scanf("%d", &vetB[i]);
    }
    printf("Vetor soma\n");
    for(i=0; i<10 ; i++){
        vetorSoma[i] = vetA[i] + vetB[i];
        printf("%d\n", vetorSoma[i]);
    }
    return 0;
}