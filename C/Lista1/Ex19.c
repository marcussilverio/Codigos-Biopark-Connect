#include <stdio.h>
#define aCHIP 4
#define aALIM 3.5

int main(){

    int qtFrangos;
    float vGasto;

    printf("Quantidade de frangos: ");
    scanf("%d", &qtFrangos);

    vGasto = qtFrangos * (2*aALIM + aCHIP);

    printf("Valor gasto com identificacao: R$%.2f", vGasto);
    return 0;
}