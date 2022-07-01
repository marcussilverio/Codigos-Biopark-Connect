#include <stdio.h>

int main(){
    float baseMen, baseMai, altura, area;

    printf("Escreva na ordem a base menor, base maior e altura do trapezio: ");
    scanf("%f %f %f", &baseMen, &baseMai, &altura);

    area = ((baseMen + baseMai)* altura)/2;
    printf("A area do trapezio eh: %.2f\n", area);
    return 0;
}