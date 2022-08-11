#include <stdio.h>
/*
    Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100, quantos estão entre 101 e 200 e quantos são maiores de 200.
   
*/
int main(){

    int contador1 = 0, contador2 = 0,contador3 =0, numero, i;

    for(i = 0 ; i < 20 ; i++){
        printf("numero %d:", i+1);
        scanf("%d", &numero);
        if(numero >= 0 && numero <= 100)
            contador1++;
        else if(numero > 100 && numero <= 200)
            contador2++;
        else if(numero > 200)
            contador3++;
    }  
    printf("Numeros entre 0 e 100: %d", contador1);
    printf("Numeros entre 100 e 200: %d", contador2);
    printf("Numeros maior de 200: %d", contador3);
    return 0;
}
