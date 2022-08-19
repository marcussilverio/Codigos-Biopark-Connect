#include <stdio.h>
#define MAX 10
/*
    Faca um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
    interseccao entre os 2 vetores anteriores, ou seja, que contem apenas os numeros que
    estao em ambos os vetores. Nao deve conter numeros repetidos.
*/
void leVetor(int vetor[], int tam);
short verificaDuplicidade(int num, int vetor[], int tam);
int interseccao(int vetor1[], int vetor2[], int vetIntersec[], int tam);
void imprimeVetor(int vetor[], int tam);

int main(){
    int vetor1[MAX], vetor2[MAX], vetorInterseccao[MAX], tamVetInterseccao;

    printf("Vetor 1:\n");
    leVetor(vetor1, MAX);
    printf("Vetor 2:\n");
    leVetor(vetor2, MAX);

    tamVetInterseccao = interseccao(vetor1, vetor2,vetorInterseccao, MAX);
    prinf("Vetor resposta: ");
    imprimeVetor(vetorInterseccao, tamVetInterseccao );
    return 0;
}
void leVetor(int vetor[], int tam){
    for(int i=0; i< tam; i++){
        scanf("%d", &vetor[i]);
    }
}
short verificaDuplicidade(int num, int vetor[], int tam){
    for(int i=0; i< tam; i++){
        if(vetor[i] == num)
            return 1;
    }
    return 0;
}
int interseccao(int vetor1[], int vetor2[], int vetIntersec[], int tam){
    int i, j, cont=0;

    for(i=0; i< tam; i++){
        for(j=0; j< tam; j++){
            if(vetor1[i] == vetor2[j]){
                if(!verificaDuplicidade(vetor1[i], vetIntersec, cont)){
                    vetIntersec[cont] = vetor1[i];
                    cont++;
                }
            }
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