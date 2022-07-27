#include <stdio.h>
/*
    Escreva um algoritmo que leia 20 números informados pelo usuário e exiba quantos números são pares.
*/
int main(){

    int contador = 0, numero, i;

    for(i = 0 ; i < 20 ; i++){
        printf("numero %d:", i+1);
        scanf("%d", &numero);
        if(numero % 2== 0)
            contador++;
    }  
    printf("Numeros pares: %d", contador);
    return 0;
}