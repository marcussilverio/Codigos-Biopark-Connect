#include <stdio.h>

int main(){
    float diagMen, diagMai, area;

    printf("Escreva na ordem a diagonal menor, diagonal maior do losango: ");
    scanf("%f %f", &diagMen, &diagMai);

    area = (diagMen * diagMai)/2;
    printf("A area do losango eh: %.2f\n", area);
    return 0;
}