#include <stdio.h>
#define MAX 15
/*
    Faca um programa que leia um vetor de 15 posicoes e o compacte, ou seja, elimine as
    posicoes com valor zero. Para isso, todos os elementos a frente do valor zero, devem ser
    movidos uma posicao para tras no vetor.
*/
void leVetor(int vetor[], int tam);
int compactador(int vetor[], int tam);
void shift_left(int vetor[], int tam);
void imprimeVetor(int vetor[], int tam);

int main(){
    int vetor[MAX], novoTamanho;

    leVetor(vetor, MAX);
    novoTamanho = compactador(vetor, MAX);
    imprimeVetor(vetor, novoTamanho);
    return 0;
}

void leVetor(int vetor[], int tam){
    for(int i=0; i< tam; i++){
        scanf("%d", &vetor[i]);
    } 
}
int compactador(int vetor[], int tam){
    for(int i=0; i< tam; i++){
        if(vetor[i] == 0){
            shift_left(&vetor[i], tam - i -1);
            i--;
            tam--;
        }
    }
    return tam;
}
void shift_left(int vetor[], int tam){
    for(int i=0; i< tam; i++){
        vetor[i] = vetor[i+1];
    }
}
void imprimeVetor(int vetor[], int tam){
    for(int i=0; i< tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}
