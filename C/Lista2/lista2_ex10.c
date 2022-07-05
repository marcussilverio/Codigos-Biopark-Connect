#include <stdio.h>

int main(){

    int num1, num2, resultado;

    scanf("%d", &num1);
    scanf("%d", &num2);

    resultado = num1 - num2;

    if(resultado <= 0)
        resultado *= -1;    
    printf("Resultado da diferenca: %d", resultado);
    return 0;
}