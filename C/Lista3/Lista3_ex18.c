#include <stdio.h>
#include <stdlib.h>
/*
    Escreva um algoritmo que leia a quantidade de alunos em uma turma. Em seguida,
    a. para cada aluno, leia a informação de suas 2 notas, calcule a média e informe se o
    b. aluno está aprovado ou reprovado. O aluno está aprovado apenas se a sua média for maior ou igual a 6.
*/
int main(){

    int qtAluno, i;
    float nota1, nota2, media;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtAluno);

    for(i=0 ; i < qtAluno ; i++){
        system("cls");
        printf("Nota1: ");
        scanf("%f", &nota1);
        printf("Nota2: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2)/2;

        if(media >= 6)
            printf("Aluno aprovado!\n");
        else
            printf("Aluno reprovado!\n");
        system("pause");
    }
    return 0;
}