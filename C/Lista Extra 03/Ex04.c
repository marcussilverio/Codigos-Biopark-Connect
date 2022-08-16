#include <stdio.h>
/*
    Faca um programa que leia um vetor de 8 posicoes e, em seguida, leia tambem dois valores
    X e Y quaisquer correspondentes a duas posicoes no vetor. Ao final seu programa
    dever a escrever a soma dos valores encontrados nas respectivas posicoes X e Y .
*/
int main(){
    int vetor[8];
    int x, y, soma, i;

    //leitura do vetor
    for(i=0; i<8; i++){
        scanf("%d", &vetor[i]);
    }

    // le x e y
    printf("Digite os valores X e Y: ");
    scanf("%d %d", &x, &y);

    //soma dos valores nas posicoes x e y
    soma = vetor[x] + vetor[y];

    //printf da soma
    printf("soma: %d\n", soma);
    return 0;
}