#include <stdio.h>
#define TAM 10
/*
    Escreva um programa que leia numeros inteiros no intervalo [0,50] e os armazene em um
    vetor com 10 posicoes. Preencha um segundo vetor apenas com os numeros ımpares
    do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.
*/
void leVetor(int vetor[], int tam);
void separaImpares(int vetorDeImpares[], int vetor[], int tam);
int contaImpares(int vetor[], int tam);
void imprimeVetor(int vetor[],int tam);

int main(){
    int vetor[TAM], vetorDeImpares[TAM], qtdImpares;

    leVetor(vetor, TAM);

    qtdImpares = contaImpares(vetor, TAM);
    separaImpares(vetorDeImpares, vetor, TAM);

    printf("Vetor:\n");
    imprimeVetor(vetor, TAM);
    printf("Vetor de impares:\n");
    imprimeVetor(vetorDeImpares, qtdImpares);
    
    return 0;
}
void leVetor(int vetor[], int tam){
    printf("Digite o vetor:\n");
    for(int i=0; i< tam; i++)
        scanf("%d", &vetor[i]);
}
void separaImpares(int vetorDeImpares[], int vetor[], int tam){
    int indiceVetorImpar=0;
    for(int i=0; i< tam; i++){
        if(vetor[i]%2 == 1){
            vetorDeImpares[indiceVetorImpar] = vetor[i];
            indiceVetorImpar++;
        }
    } 
}
int contaImpares(int vetor[], int tam){
    int contadorImpar=0;
    for(int i=0; i< tam; i++){
        if(vetor[i]%2 == 1){
            contadorImpar++;
        }
    }
    return contadorImpar;
}
void imprimeVetor(int vetor[],int tam){
    for(int i =0; i< tam; i++){
        printf("%d ", vetor[i]);
        if(i % 2 == 1)
            printf("\n");
    }
    printf("\n");
}