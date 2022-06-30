#include <stdio.h>
#include <math.h>

int main(){

    float Ax, Ay, Bx, By, distancia;

    printf("Ponto 1 coordenada X: ");
    scanf("%f", &Ax);
    printf("Ponto 1 coordenada Y: ");
    scanf("%f", &Ay);

    printf("Ponto 2 coordenada X: ");
    scanf("%f", &Bx);
    printf("Ponto 2 coordenada Y: ");
    scanf("%f", &By);

    distancia = sqrt(pow(Bx - Ax, 2)+ pow(By - Ay, 2));

    printf("A distancia entre os pontos (%.1f,%.1f) e (%.1f,%.1f) eh %.2f\n", Ax, Ay, Bx, By, distancia);

    return 0;
}