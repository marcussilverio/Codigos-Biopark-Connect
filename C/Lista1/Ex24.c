#include <stdio.h>

int main(){

    float agua, maracuja, refresco;

    printf("Quantidade de refresco em litros: ");
    scanf("%f", &refresco);
    agua = refresco *0.8;
    maracuja = refresco * 0.2;
    printf("Quantidade de agua mineral necessaria: %.2fL\n", agua);
    printf("Quantidade de suco de maracuja necessario: %.2fL\n", maracuja);
    return 0;    
}