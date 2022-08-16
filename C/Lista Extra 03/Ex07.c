#include <stdio.h>
/*
    Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima
    o vetor, o maior elemento e a posicao que ele se encontra.
*/
int main(){
    int vetor[10], maior, indiceMaior, i;

    // leitura do vetor
    for(i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }

    // busca o maior elemento
    maior = vetor[0];
    indiceMaior = 0;
    for(i=1; i<10;i++){
        if(maior < vetor[i]){
            maior = vetor[i];
            indiceMaior = i;
        }
    }

    printf("Maior valor: %d, encontrado na posicao %d", maior, indiceMaior);

    return 0;
}