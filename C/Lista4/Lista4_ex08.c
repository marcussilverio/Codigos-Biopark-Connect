#include <stdio.h>
#include <string.h>
/*
    Leia o nome e a idade de 10 pessoas e exiba o nome da pessoa mais nova.
*/
int main(){

    int idade, menorIdade=100, i;
    char nome[20], menorNome[20];

    for(i =0 ; i <10 ; i++){
        printf("nome: ");
        fgets(nome, 20, stdin);
        //tirar o enter no final da string lida pelo fgets
        nome[strcspn(nome, "\n")] = 0;
        printf("idade: ");
        scanf("%d", &idade);
        fflush(stdin);
        if(idade < menorIdade){
            menorIdade = idade;
            strcpy(menorNome, nome);
        }
    }

    printf("Mais novo: %s com %d anos", menorNome, menorIdade);

    return 0;
}