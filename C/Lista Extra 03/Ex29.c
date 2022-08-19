#include <stdio.h>
#define MAX 6
/*
    Faca um programa que receba 6 numeros inteiros e mostre:
    * Os numeros pares digitados;
    * A soma dos numeros pares digitados;
    * Os numeros ımpares digitados;
    * A quantidade de numeros ımpares digitados;
*/
void leVetor(int vetor[], int tam);
int addImparesV1(int vetor[], int v1[], int tam);
int addParesV2(int vetor[], int v2[], int tam);
void imprimeVetor(int vetor[], int tam);
int somaVetor(int vetor[], int tam);
int main(){
    int vetor[MAX], v1[MAX], v2[MAX], tamv1, tamv2;

    leVetor(vetor, MAX);
    tamv1 = addImparesV1(vetor, v1, MAX);
    tamv2 = addParesV2(vetor, v2, MAX);

    printf("Numeros pares digitados: ");
    imprimeVetor(v2, tamv2);
    printf("Soma dos pares digitados: %d\n",somaVetor(v2, tamv2));
    
    printf("Numeros impares digitados: ");
    imprimeVetor(v1, tamv1);
    printf("Quantidade de numeros impares digitados: %d\n", tamv1);
    return 0;
}
void leVetor(int vetor[], int tam){
    for(int i=0; i< tam; i++){
        scanf("%d", &vetor[i]);
    }
}
int addImparesV1(int vetor[], int v1[], int tam){
    int cont=0;

    for(int i=0; i<tam; i++){
        if(vetor[i]%2 == 1){
            v1[cont] = vetor[i];
            cont++;
        }
    }
    return cont;
}
int addParesV2(int vetor[], int v2[], int tam){
    int cont=0;

    for(int i=0; i<tam; i++){
        if(vetor[i]%2 == 0){
            v2[cont]= vetor[i];
            cont++;
        }
    }
    return cont;
}
void imprimeVetor(int vetor[], int tam){
    for(int i=0; i<tam ; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
int somaVetor(int vetor[], int tam){
    int soma=0;
    for(int i=0; i< tam; i++)
        soma+=vetor[i];
    return soma;
}