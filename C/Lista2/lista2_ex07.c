#include <stdio.h>

int main(){
    float altura;
    char sexo;

    printf("Insira a altura em m: ");
    scanf("%f", &altura);
    printf("Insira o sexo (m ou f): ");
    scanf("%c", &sexo);

    if(sexo == 'f'){
        printf("Peso ideal: %.2f\n", (62.1*altura)- 44.7);
    }else if(sexo == 'm'){
        printf("Peso ideal: %.2f\n", (72.7*altura)- 58);
    }else{
        printf("Sexo invalido\n");
    }
    return 0;   
}