#include <stdio.h>
#define MAX 100
/*
    Faca um programa que preencha um vetor de tamanho 100 com os 100 primeiros
    naturais que nao sao multiplos de 7 ou que terminam com 7.
*/
void preencheVetor(int vetor[], int tam);
void imprimeVetor(int vetor[], int tam);

int main(){
    int vetor[MAX];

    preencheVetor(vetor, MAX);
    imprimeVetor(vetor, MAX);
    return 0;
}

void preencheVetor(int vetor[], int tam){
    int i, cont=0;
    for(i=0; i< tam; i++){
        // Enquanto o numero nao for multiplo e nem terminar em 7, continua incrementando
        while((cont % 7 != 0) && (cont % 10 != 7)){
            cont++;
        }
        vetor[i] = cont;        
        cont++;
    }
}
void imprimeVetor(int vetor[], int tam){
    for(int i=0; i<tam ; i++){
        printf("%d\t", vetor[i]);
        if((i+1)%10 ==0)
            printf("\n");
    }
    printf("\n");
}
