#include <stdio.h>
#define vNormal 10.00
#define vExtra 15.00
#define IMPOSTO 0.1

int main(){

    float hNormal, hExtra, sBruto, sLiq;

    printf("Quantidade de Horas normais trabalhadas: ");
    scanf("%f", &hNormal);

    printf("Quantidade de Horas extras trabalhadas: ");
    scanf("%f", &hExtra);

    sBruto = hNormal*vNormal + hExtra*vExtra;
    sLiq = sBruto *(1 - IMPOSTO);

    printf("Salario bruto: R$%.2f\nSalario liquido: R$%.2f", sBruto, sLiq);
}