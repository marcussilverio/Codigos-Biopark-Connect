#include <stdio.h>

int main(){

    float sMinimo, salario, qtSalMinimo;

    printf("Salario minimo: ");
    scanf("%f", &sMinimo);
    printf("Salario: ");
    scanf("%f", &salario);

    qtSalMinimo = salario/sMinimo;
    printf("Qtd de salarios minimos: %.2f\n", qtSalMinimo);
    return 0;
}