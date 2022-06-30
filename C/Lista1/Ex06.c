#include <stdio.h>
#define valorKG 12

int main(){
    float peso, valor;

    printf("Peso: ");
    scanf("%f", &peso);

    printf("Valor a pagar:R$ %.2f\n", peso*valorKG);
}