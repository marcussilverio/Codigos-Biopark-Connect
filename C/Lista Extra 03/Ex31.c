#include <stdio.h>
#define MAX 5
/*
    Faca um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a uniao
    entre os 2 vetores anteriores, ou seja, que contem os numeros dos dois vetores. Nao
    deve conter numeros repetidos.
*/
void leVetor(int vetor[], int tam);
short verificaDuplicidade(int num, int vetor[], int tam);
int uniao(int vetor1[], int vetor2[], int vetIntersec[], int tam);
void imprimeVetor(int vetor[], int tam);

int main(){
    int vetor1[MAX], vetor2[MAX], vetorUniao[MAX*2], tamVetUniao;

    printf("Vetor 1:\n");
    leVetor(vetor1, MAX);
    printf("Vetor 2:\n");
    leVetor(vetor2, MAX);

    tamVetUniao = uniao(vetor1, vetor2,vetorUniao, MAX);
    prinf("Vetor resposta: ");
    imprimeVetor(vetorUniao, tamVetUniao );
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
int uniao(int vetor1[], int vetor2[], int vetIntersec[], int tam){
    int i, j, cont=0;

    for(i=0; i< tam; i++){            
        if(!verificaDuplicidade(vetor1[i], vetIntersec, cont)){
            vetIntersec[cont] = vetor1[i];
            cont++;
        }
    }
    for(i=0; i< tam; i++){            
        if(!verificaDuplicidade(vetor2[i], vetIntersec, cont)){
            vetIntersec[cont] = vetor2[i];
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