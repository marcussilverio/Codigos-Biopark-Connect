#include <stdio.h>
#include <string.h>
/*
    Faça um algoritmo escreva a diversas vezes a pergunta “Olá tudo bem?” e leia a resposta do usuário enquanto ele responde não. 
    Só encerre a execução quando a resposta for igual a “Sim”.
*/
int main(){

    char resposta[4];

    do{
        printf("Ola, tudo bem?\n");
        scanf("%s", resposta);

    }while(strcmp(resposta,"sim"));
    return 0;
}