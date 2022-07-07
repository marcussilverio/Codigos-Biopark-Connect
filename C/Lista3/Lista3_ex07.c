#include <stdio.h>
#include <math.h> 
#define PI 3.1415
/* 
    Le o raio de um disco e imprime a area e perimetro.
*/
int main(){

    float raio, area, perimetro;

    scanf("%f", &raio);

    area = PI * pow(raio, 2);
    perimetro = 2 * PI * raio;

    printf("area: %.2f\nperimetro: %.2f\n", area, perimetro);

    return 0;   
}