#include <stdio.h>

int main(){

    int ano;
    float valorTabela;

    printf("Ano do carro: ");
    scanf("%d", &ano);
    printf("Valor tabelado: ");
    scanf("%f", &valorTabela);

    if( ano < 1990)
        printf("Valor do imposto: R$%.2f\n", valorTabela*0.01);
    else
        printf("Valor do imposto: R$%.2f\n", valorTabela*0.015);

    return 0;
}