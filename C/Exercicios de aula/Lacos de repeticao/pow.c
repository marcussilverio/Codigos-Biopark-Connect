#include <stdio.h>

/*
    fazer a potencia de 2 valores.
*/

int main(){

    int num1, num2, i, resultado=1;

    scanf("%d %d", &num1, &num2);

    for(i = 0; i< num2; i++){
        resultado *= num1;
    }
    printf("Resultado: %d\n", resultado);
    return 0;
}