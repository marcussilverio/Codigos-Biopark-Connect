#include<stdio.h>
/*
    Faca um programa que receba do usuario um vetor com 10 posicoes. Em seguida devera
    ser impresso o maior e o menor elemento do vetor.
*/
int main(){
    int vetor[10], i, maior, menor;

    //leitura do vetor
    for(i =0; i< 10; i++){
        scanf("%d", &vetor[i]);
    }

    //encontra o maior e menor valor
    maior = menor = vetor[0];
    for(i=1; i<10;i++){
        if(maior < vetor[i])
            maior = vetor[i];
        if(menor > vetor[i])
            menor = vetor[i];
    }

    printf("maior: %d, menor: %d\n", maior, menor);
    return 0;
}