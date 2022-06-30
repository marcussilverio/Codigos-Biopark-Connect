#include <stdio.h>
#define p1 1
#define p2 2
#define p3 3

int main(){
    float nota1, nota2, nota3, media;

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    printf("Nota 3: ");
    scanf("%f", &nota3);

    media = ((nota1*p1) + (nota2*p2) + (nota3*p3)) / (p1+p2+p3);

    printf("Media: %.2f", media);
    return 0;
}