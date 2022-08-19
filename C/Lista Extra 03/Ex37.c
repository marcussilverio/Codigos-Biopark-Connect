#include <stdio.h>
#define MAX 11
/*
    Considere um vetor A com 11 elementos onde A1 < A2 < ... < A6 > A7 > A8 > ... > A11, 
    ou seja, esta ordenado em ordem crescente at e o sexto elemento, e a partir
    desse elemento esta ordenado em ordem decrescente. Dado o vetor da questao anterior,
    proponha um algoritmo para ordenar os elementos.
*/
void leVetor(float vetor[], int tam);
void bubbleSortCresc(float vetor[], int tam);
void bubbleSortDecresc(float vetor[], int tam);
void imprimeVetor(float vetor[], int tam);

int main(){
    float vetor[MAX];
    int metade = MAX/2;


    leVetor(vetor, MAX);
    bubbleSortCresc(vetor, MAX);
    bubbleSortDecresc(&vetor[metade+1], metade);
    imprimeVetor(vetor, MAX);
    return 0;
}

void leVetor(float vetor[], int tam){
    for(int i=0; i< tam; i++){
        scanf("%f", &vetor[i]);
    } 
}
void bubbleSortCresc(float vetor[], int tam){
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
void bubbleSortDecresc(float vetor[], int tam){
    int i, j;
    float aux;
    for(i=0; i< tam; i++){
        for(j=i+1; j< tam; j++){
            if(vetor[i] < vetor [j]){
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