#include <stdio.h>
#include <math.h>
/* 
    Faça um programa que leia um número real x e calcule o valor de 
    f(x) =x^(1/2) + (x=2) + x^x.
*/

int main(){

    double x;
    printf("x: ");
    scanf("%lf", &x);

    x = sqrt(x) + (x/2) + pow(x, x);

    printf("valor de x: %lf", x);
    return 0;
}