#include <stdio.h>

int main(){
    float salario =1200.00, c1 = 200.00, c2 = 120.00, resto;

    resto = salario - (c1*1.02 + c2*1.02);
    printf("Restara R$%.2f do salario de Joao\n", resto);
    return 0;
}