#include <stdio.h>
/*Programa que le duas variaveis e inverte os valores delas
sem o uso de variavel auxiliar*/

int main() {

    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    x = x+y;
    y = x - y;
    x = x - y;

    printf("x: %d, y: %d", x, y);

    return 0;
}