#include<stdio.h>
#include<stdlib.h>
/*
    INSS 
    recebe de entrada o sexo, a idade e o tempo de contribuição e retorna
    se é aposentavel ou não de acordo com as regras.

    sexo M idade 65> contribuiçao 10>
    sexo M idade 63> contribuiçao 15>
    sexo F idade 63> contribuiçao 10>
    sexo F idade 61> contribuiçao 15>z

*/
int main(){

    char sexo;
    int idade, tempoContribuicao;

    printf("Sexo: ");
    scanf("%c", &sexo);
    fflush(stdin);
    printf("Idade: ");
    scanf("%d", &idade);
    printf("Tempo de contribuicao: ");
    scanf("%d", &tempoContribuicao);

    if(sexo == 'm' || sexo == 'M'){
        if(idade >= 65 && tempoContribuicao >= 10){
            printf("Aposentavel.\n");
        }else if(idade >= 63 && tempoContribuicao >= 15){
            printf("Aposentavel.\n");
        }else{
            printf("Nao aposentavel.\n");
        }
    }else if(sexo == 'f' || sexo == 'F'){
        if(idade >= 63 && tempoContribuicao >= 10){
            printf("Aposentavel.\n");
        }else if(idade >= 61 && tempoContribuicao >= 15){
            printf("Aposentavel.\n");
        }else{
            printf("Nao aposentavel.\n");
        }
    }
    return 0;
}