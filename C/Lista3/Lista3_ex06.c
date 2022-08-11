#include <stdio.h>
/*
    Leia a idade de 20 pessoas e exiba a média das idades.
*/

int main(){
    int idade[20], i;
    float soma =0;

    for(i=0; i<20; i++){
        scanf("%d", &idade[i]);
        soma += idade[i];
    }
    soma = soma/20;
    printf("media: %.2f\n", soma);
    return 0;
}