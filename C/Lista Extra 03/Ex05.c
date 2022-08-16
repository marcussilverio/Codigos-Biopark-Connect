#include <stdio.h>
/*
    Leia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele possui.
*/
int main(){
    int vetor[10], pares = 0, i;

    //le o vetor
    for(i=0; i<10;i++){
        scanf("%d", &vetor[i]);
    }

    //contabiliza os valores pares
    for(i=0; i<10; i++){
        if(vetor[i]%2 == 0)
            pares++;
    }
    printf("Quantidade de numeros pares: %d\n", pares);
    return 0;
}