#include <stdio.h>
/*
    Escreva um algoritmo que leia uma sequência de números do usuário e realize a soma desses números. 
    Encerre a execução quando um número negativo for digitado.
*/
int main(){

    int num=0, soma =0;

    do{
        soma += num;
        scanf("%d", &num);     
    }while(num >=0);
    printf("soma: %d", soma);

    return 0;   
}