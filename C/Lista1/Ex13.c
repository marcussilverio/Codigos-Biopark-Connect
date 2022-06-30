#include <stdio.h>

int main(){

    int numero, unidade, dezena, centena;

    printf("Numero: ");
    scanf("%d", &numero);

    unidade = (numero%100)%10;
    dezena = (numero%100)/10;
    centena = numero/100;

    printf("Centena: %d\nDezena: %d\nUnidade: %d\n", centena, dezena, unidade);

    return 0;
}