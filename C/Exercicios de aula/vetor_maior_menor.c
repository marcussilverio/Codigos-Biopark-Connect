#include <stdio.h>
/*
    Le 10 valores e retorna qual e o menor e maior deles.
*/
int main(){

    int i, vet[10];
    int maior, menor;

    for(i=0; i< 10; i++){
        scanf("%d", &vet[i]);
    }
    maior = menor = vet[0];

    for (i = 1; i< 10; i++){
        if(vet[i]< menor)
            menor = vet[i];
        if(vet[i] > maior)
            maior = vet[i];
    }

    printf("maior: %d\nmenor: %d\n", maior, menor);
    return 0;
}