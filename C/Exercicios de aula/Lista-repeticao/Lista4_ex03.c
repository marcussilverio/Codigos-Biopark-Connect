#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Leia o nome do usuário e escreva o nome dele na tela 10 vezes.
*/

int main(){

    char nome[20];
    int i;

    fgets(nome, 20, stdin);
    //tirar o enter no final da string lida pelo fgets
    nome[strcspn(nome, "\n")] = 0;

    for(i =0; i< 10 ; i++)
        printf("%s\n", nome);
    return 0;
}