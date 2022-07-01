#include <stdio.h>
#include<math.h>
#define PI 3.14
int main(){

    float raio, altura, volume;
    printf("Escreva o raio e a altura da caixa de agua, nessa ordem: ");
    scanf("%f %f", &raio, &altura);
    volume = (PI * pow(raio,2) ) * altura;
    printf("Volume da caixa d'agua: %.2f", volume);
    return 0;
}