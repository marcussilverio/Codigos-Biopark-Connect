#include <stdio.h>

int main(){

    int valor;
    int c100, c50, c10, c5, c1;

    printf("Valor: ");
    scanf("%d", &valor);

    c100 = valor / 100;
    c50 = valor % 100 / 50;
    c10 = valor % 100 % 50 / 10;
    c5 = valor % 100 % 50 % 10 / 5;
    c1 = valor % 100 % 50 % 10 % 5 / 1;

    printf("Valor lido: %d\n", valor);
    printf("Quantidade de cedulas\n100: %d\n50: %d\n10: %d\n5: %d\n1: %d\n ", c100, c50, c10, c5, c1);
    return 0;
}