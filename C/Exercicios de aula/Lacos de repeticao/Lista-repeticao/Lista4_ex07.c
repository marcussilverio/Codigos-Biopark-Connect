#include <stdio.h>
/*
    Leia a idade de 20 pessoas e exiba quantas pessoas são maiores de idade.
*/
int main(){

    int contador = 0, idade, i;

    for(i = 0 ; i < 20 ; i++){
        printf("idade numero %d:", i+1);
        scanf("%d", &idade);
        if(idade >=18)
            contador++;
    }  
    printf("Numero de pessoas maiores de idade: %d", contador);
    return 0;
}