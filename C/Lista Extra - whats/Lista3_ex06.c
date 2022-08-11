#include <stdio.h>
#include <math.h>
/*
    Le o valores correspondente aos 3 lados e calcula
    a area do triangulo pela formula de Heron.

    O resultado é ligeiramente diferente em algumas situacoes
    por causa do acumulo de erro obtido por varias operacoes de
    multiplicação e divisão.
*/
int main(){

    float a, b, c, area, s;

    scanf("%f %f %f", &a, &b, &c);

    s = (+a+b+c)/2;
    area = sqrt((s*(s-a)*(s-b))*(s-c));

    printf("area: %.2f", area);
    
    return 0;
}