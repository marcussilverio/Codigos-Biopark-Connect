#include <stdio.h>
#include <math.h>
/*
    Escreva uma função que recebe um número ponto flutuante n passado por parâmetro e devolve a raiz
    quadrada de n.
*/
float raiz(float num){
    return pow(num, 0.5);
}

int main(){
    float num;
    scanf("%f", &num);
    printf("%.2lf\n", raiz(num));
}