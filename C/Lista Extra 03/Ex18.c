#include <stdio.h>
#define TAM 10
/*
    Faca um programa que leia um vetor de 10 numeros. Leia um numero x. Conte os
    multiplos de um numero inteiro x num vetor e mostre-os na tela.
*/
void leVetor(int vetor[], int tam);
int numeroX();
int contaMultiplo(int num, int vetor[], int tam);
void addMultiploNoVetor(int num, int vetor[]);
void imprimeVetorDeMultiplos(int vetor[], int tam);

int main(){
    int vetor[TAM];
    leVetor(vetor, TAM);
    printf("Quantidade de multiplos: %d", contaMultiplo(numeroX(), vetor, TAM));  
    return 0;
}

void leVetor(int vetor[], int tam){
    int i;
    printf("Vetor:\n");
    for(i=0; i< tam; i++){
        scanf("%d", &vetor[i]);
    }
}
int numeroX(){
    int x;
    printf("Digite o numero: ");
    scanf("%d", &x);
    return x;
}
int contaMultiplo(int num, int vetor[], int tam){
    int i, cont=0, vetorDeMultiplos[TAM];
    for(i=0; i< tam; i++){
        if(vetor[i] % num == 0){
            addMultiploNoVetor(vetor[i], &vetorDeMultiplos[cont]);
            cont++;
        }
    }
    imprimeVetorDeMultiplos(vetorDeMultiplos, cont);
    return cont;
}
void addMultiploNoVetor(int num, int vetor[]){
    vetor[0]=num;
}
void imprimeVetorDeMultiplos(int vetor[], int tam){
    printf("Vetor de multiplos: ");
     for(int i=0; i< tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}