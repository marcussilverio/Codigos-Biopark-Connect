#include <stdio.h>
/*
    Escreva um algoritmo que leia 10 números informados pelo usuário e calcule a soma desses números.
*/
int main(){

    int num[10], i, soma=0;

    for(i =0; i< 10; i++){
        printf("numero %d: ", i+1);
        scanf("%d", &num[i]);
        soma += num[i];
    }

    printf("soma: %d", soma);

    return 0;
}