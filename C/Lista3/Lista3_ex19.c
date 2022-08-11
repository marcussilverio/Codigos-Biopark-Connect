#include <stdio.h>
/*
    Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar :
    a. A menor altura do grupo;
    b. A maior altura do grupo;
*/
int main(){

    float altura, maior = 0 , menor = 1000;
    int i;

    for(i =0 ; i < 15; i++){
        printf("altura pessoa %d: ", i+1);
        scanf("%f", &altura);

        if(altura > maior)
            maior = altura;
        if(altura < menor)
            menor = altura;
    }
    printf("maior altura: %.2f\nmenor altura: %.2f", maior, menor);
    return 0;
}