#include <stdio.h>
/*
    Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100.
*/
int main(){

    int contador = 0, numero, i;

    for(i = 0 ; i < 20 ; i++){
        printf("numero %d:", i+1);
        scanf("%d", &numero);
        if(numero >= 0 && numero <= 100)
            contador++;
    }  
    printf("Numeros entre 0 e 100: %d", contador);
    return 0;
}