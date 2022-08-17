#include <stdio.h>
#define TAM 10
/*
    Faca um programa que leia dois vetores de 10 posicoes e calcule outro vetor contendo,
    nas posicoes pares os valores do primeiro e nas posicoes impares os valores do segundo.
*/
void leVetor(int vetor[], int tam);
void calculaVetor(int vetorA[], int vetorB[], int vetorC[], int tam);
void imprimeVetor(int vetor[], int tam);

int main(){
    int vetorA[TAM], vetorB[TAM], vetorC[TAM];

    printf("Primeiro vetor: \n");
    leVetor(vetorA, TAM);
    printf("Segundo vetor: \n");
    leVetor(vetorB, TAM);

    calculaVetor(vetorA, vetorB, vetorC, TAM);

    printf("Vetor resposta: ");
    imprimeVetor(vetorC, TAM);

    return 0;
}

void leVetor(int vetor[], int tam){
    for(int i=0; i< tam; i++){
        scanf("%d", &vetor[i]);
    }
}
void calculaVetor(int vetorA[], int vetorB[], int vetorC[], int tam){
    for(int i=0; i< tam; i++){
        if(i%2 == 0)
            vetorC[i] = vetorA[i];
        else    
            vetorC[i] = vetorB[i];
    }
}
void imprimeVetor(int vetor[], int tam){
    for(int i=0; i<tam ; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
