#include <stdio.h>
/*
    Faca um programa que leia um vetor de 10 posicoes e verifique se existem valores iguais
    e os escreva na tela.
*/
void verificaRepetido(int vetor[]);
void insereVetorRepetidos(int num, int vetor[]);
void verificaExistenciaNoVetor(int num, int vetor[]);
int main(){
    int vetor[10], i, j;

    //leitura do vetor
    for(i=0; i< 10; i++){
        scanf("%d", &vetor[i]);
    }

    // verifica valores iguais.

    for(i = 0; i<10; i++){
        for(j=i+1; j< 5; j++ )
            if(vetor[i] == vetor[j]){
                printf("valor repetido: %d\n", vetor[i]);
            }
    }
}