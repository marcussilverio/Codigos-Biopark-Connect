#include <stdio.h>
#define TAM 10
/*
    Faca um programa que receba do usuario dois vetores, A e B, com 10 numeros inteiros
    cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
    do vetor C.
*/
void leVetor(int vetor[], int tam);
void calculaSubtVetorC(int vetorA[], int vetorB[], int vetorC[], int tam);
void imprimeVetor(int vetor[], int tam);

int main(){
    int vetorA[TAM], vetorB[TAM], vetorC[TAM];
    printf("Vetor A:\n");
    leVetor(vetorA, TAM);

    printf("Vetor B:\n");
    leVetor(vetorB, TAM);

    calculaSubtVetorC(vetorA, vetorB, vetorC, TAM);

    printf("Vetor resultado> ");
    imprimeVetor(vetorC, TAM);

    return 0;
}

void leVetor(int vetor[], int tam){
    for(int i=0; i< tam; i++){
        scanf("%d", &vetor[i]);
    }
}
void calculaSubtVetorC(int vetorA[], int vetorB[], int vetorC[], int tam){
    for(int i=0; i< tam; i++){
        vetorC[i] = vetorA[i] - vetorB[i];
    }
}
void imprimeVetor(int vetor[], int tam){
    for(int i=0; i<tam ; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
