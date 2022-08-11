#include <stdio.h>
/*
    Desenvolva um algoritmo capaz de apresentar na tela o fatorial de um número inteiro informado pelo usuário.
*/
int main(){

    long long int fat=1;
    int num, i;

    scanf("%d", &num);

    for(i = num; i > 0; i--){
        fat *= i;
    }
    printf("Fatorial: %lld", fat);
    return 0;
}