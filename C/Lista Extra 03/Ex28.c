#include<stdio.h>
#define MAX 10
/*
    Leia 10 numeros inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
    Copie os valores ımpares de v para v1, e os valores pares de v para v2. Note que cada
    um dos vetores v1 e v2 tem no maximo 10 elementos, mas nem todos os elementos sao
    utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.
*/
void leVetor(int vetor[], int tam);
int addImparesV1(int vetor[], int v1[], int tam);
int addParesV2(int vetor[], int v2[], int tam);
void imprimeVetor(int vetor[], int tam);
int main(){
    int vetor[MAX], v1[MAX], v2[MAX], tamv1, tamv2;

    leVetor(vetor, MAX);
    tamv1 = addImparesV1(vetor, v1, MAX);
    tamv2 = addParesV2(vetor, v2, MAX);

    printf("Vetor de impares: ");
    imprimeVetor(v1, tamv1);
    printf("Vetor de pares: ");
    imprimeVetor(v2, tamv2);
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
