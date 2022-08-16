#include <stdio.h>
/*
    Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
*/
int main(){

    int i, vetor[6];

    for(i=0; i<6;i++)
        scanf("%d", &vetor[i]);
    for(i=0; i<6;i++)
        printf("%d ", vetor[i]);
    printf("\n");

}