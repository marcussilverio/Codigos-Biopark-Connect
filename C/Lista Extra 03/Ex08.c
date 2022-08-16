#include <stdio.h>
/*
    Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos
    na ordem inversa.
*/

int main(){
    int vetor[6], i;

    // leitura do vetor
    for(i=0;i<6;i++)
        scanf("%d", &vetor[i]);

    // mostrar na ordem inversa
    for(i = 5; i >= 0; i--){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}