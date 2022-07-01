#include <stdio.h>

int main(){

    float peso;

    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Se engordar 15%%: %.2fKg\nSe emagrecer 20%%: %.2fKg\n", peso*1.15, peso*0.8);
    return 0;
}