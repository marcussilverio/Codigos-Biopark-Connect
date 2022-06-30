#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
    float raio, area;

    printf("Raio R: ");
    scanf("%f", &raio);

    area = PI * pow(raio,2);
    printf("Area da Pizza: %.2f", area);
    return 0;
}