#include <stdio.h>

int main(){

    float sInicial, sAumento, sFinal;

    printf("Salario: ");
    scanf("%f", &sInicial);

    sAumento = sInicial * 1.15;
    sFinal = sAumento * 0.92;

    printf("Salario Inicial: %.2f\nSalario com aumento: %.2f\nSalario Final: %.2f", sInicial, sAumento, sFinal);
}