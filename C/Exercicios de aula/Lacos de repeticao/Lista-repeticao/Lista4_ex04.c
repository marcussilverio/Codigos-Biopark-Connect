#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Leia o nome de um usuário e um número N e escreva o nome dele na tela N vezes.
*/
int main(){

    char nome[20];
    int i, num;
    
    printf("nome: ");
    fgets(nome, 20, stdin);
    //tirar o enter no final da string lida pelo fgets

    printf("numero de vezes: ");
    scanf("%d", &num);
    nome[strcspn(nome, "\n")] = 0;

    for(i =0; i< num ; i++)
        printf("%s\n", nome);
    return 0;
}