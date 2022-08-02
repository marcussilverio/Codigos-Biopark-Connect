#include <stdio.h>
#include <stdlib.h>
#define TAM 10
/*
    Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor 
    após a retirada dos nulos e negativos.
*/
void left_shift( int * vet, int t){
    int i;
    for(i=0; i< t; i++){
        vet[i] = vet[i+1];
    }
}

int main(){

    int D[TAM], i, c=0;

    for(i =0; i< TAM; i++){
        scanf("%d", &D[i]);
    }
    for(i = 0; i < TAM; i++){
        if(D[i] <= 0){
            left_shift(&D[i], TAM-i );
            i--;
            if(c != 0){
                c--;
            }
        }else{
            c++;
        }
    }
    printf("c: %d\n", c);
    for(i=0; i< c; i++){
        printf("%d ", D[i]);
    }
    return 0;
}