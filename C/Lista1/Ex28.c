#include <stdio.h>

int main(){
    float nota1, nota2, media;

    printf("Digite as notas: ");
    scanf("%f %f", &nota1, &nota2);
    media = (nota1*2 + nota2*3)/(2+3);
    printf("Media ponderada: %.2f", media);
    return 0;
}