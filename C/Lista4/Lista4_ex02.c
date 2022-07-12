#include <stdio.h>
/*
    Escreva um algoritmo que calcule o somatório dos números de um intervalo informado pelo usuário.
*/

int main(){

    int inicio, fim, soma = 0, i;

    scanf("%d %d", &inicio, &fim);

    // tratamento para somar sempre do menor para o maior.
    if( inicio < fim)
        for(i = inicio; i <= fim ; i++){
            soma += i;
        }
    else
        for( i = fim;  i <= inicio ; i++){
            soma += i;
        }
    printf("soma: %d\n", soma);

    return 0;
}