#include <stdio.h>

int main(){
    float pesoKg, pesoG;

    printf("Peso em Kg: ");
    scanf("%f", &pesoKg);

    pesoG = pesoKg*1000;

    printf("Peso em gramas: %.0fg", pesoG);
    return 0;
}