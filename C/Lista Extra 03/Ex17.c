#include <stdio.h>
#define TAM 10
/*
    Leia um vetor de 10 posicoes e atribua valor 0 para todos os elementos que possuırem
    valores negativos.
*/
void leVetor(int vetor[], int tam);
void zeraNegativos(int vetor[], int tam);
void imprimeVetor(int vetor[], int tam);

int main(){

    int vetor[TAM];
    leVetor(vetor, TAM);
    zeraNegativos(vetor, TAM);
    imprimeVetor(vetor, TAM);
    return 0;
}

void leVetor(int vetor[], int tam){
    int i;
    for(i=0; i< tam; i++){
        scanf("%d", &vetor[i]);
    }
}
void zeraNegativos(int vetor[], int tam){
    int i;
    for(i=0; i< tam; i++){
        if(vetor[i] < 0)
            vetor[i] =0;
    }
}
void imprimeVetor(int vetor[], int tam){
     for(int i=0; i< tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}