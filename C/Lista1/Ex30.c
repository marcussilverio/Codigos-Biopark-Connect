#include <stdio.h>

int main(){

    float sFixo, vendas, sFinal;

    printf("Salario fixo: ");
    scanf("%f", &sFixo);
    printf("vemdas: ");
    scanf("%f", &vendas);

    sFinal = sFixo + (vendas * 0.04);
    printf("Salario final: R$%.2f\n", sFinal);
    return 0;
}