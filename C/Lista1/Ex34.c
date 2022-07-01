#include <stdio.h>
#include <math.h>

int main(){

    int lado;

    printf("Medida do lado do quadrado: ");
    scanf("%d", &lado);
    lado = pow(lado,2);
    printf("A area do quadrado eh: %d", lado);
    return 0;
}