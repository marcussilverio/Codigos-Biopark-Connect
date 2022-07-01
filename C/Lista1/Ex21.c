#include <stdio.h>

int main(){

    float lata, g600, g2;

    printf("Quantidade de latas: ");
    scanf("%f", &lata);
    lata *=0.35;

    printf("Quantidade de garrafas 600ml: ");
    scanf("%f", &g600);
    g600 *= 0.6;

    printf("Quantidade de garrafas 2L: ");
    scanf("%f", &g2);
    g2 *= 2;

    printf("Quantidade de litros comprados: %.2f litros\n", lata+g600+g2);
    return 0;
}