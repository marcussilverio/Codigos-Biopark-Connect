#include <stdio.h>
#define MAX 10
/*
    Leia um vetor com 10 numeros reais, ordene os elementos deste vetor, e no final escreva
    os elementos do vetor ordenado.
*/
void leVetor(float vetor[], int tam);
void bubbleSort(float vetor[], int tam);
void imprimeVetor(float vetor[], int tam);

int main(){
    float vetor[MAX];

    leVetor(vetor, MAX);
    bubbleSort(vetor, MAX);
    imprimeVetor(vetor, MAX);
    return 0;
}

void leVetor(float vetor[], int tam){
    for(int i=0; i< tam; i++){
        scanf("%f", &vetor[i]);
    } 
}
void bubbleSort(float vetor[], int tam){
    int i, j;
    float aux;
    for(i=0; i< tam; i++){
        for(j=i+1; j< tam; j++){
            if(vetor[i] > vetor [j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

void imprimeVetor(float vetor[], int tam){
    for(int i=0; i< tam; i++){
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}