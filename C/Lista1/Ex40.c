#include <stdio.h>
#include <math.h>

int main(){

    float catOp, catAdj, hip;

    printf("Cateto oposto: ");
    scanf("%f", &catOp);
    printf("Cateto adjacente: ");
    scanf("%f", &catAdj);

    hip = sqrt(pow(catOp, 2) + pow(catAdj,2));
    printf("O valor da hipotenusa correspondente eh: %.2f\n", hip);
    return 0;
}