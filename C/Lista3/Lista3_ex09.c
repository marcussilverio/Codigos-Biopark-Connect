#include <stdio.h>
/*
    Escreva um algoritmo que leia 20 números informados pelo usuário e exiba quantos números são maiores do que 8.
*/
int main(){

    int contador = 0, numero, i;

    for(i = 0 ; i < 20 ; i++){
        printf("numero %d:", i+1);
        scanf("%d", &numero);
        if(numero > 8)
            contador++;
    }  
    printf("Numeros maiores que 8: %d", contador);
    return 0;
}