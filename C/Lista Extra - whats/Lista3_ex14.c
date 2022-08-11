#include <stdio.h>
/*
    Recebe um par de coordenadas e retorna o quadrante correspondente.
*/
int main(){

    float x, y;

    scanf("%f %f", &x, &y);

    if(x > 0){
        if(y > 0 ){
            printf("Primeiro quadrante\n");
        }else{
            printf("Quarto quadrante\n");
        }
    }else{
         if(y > 0 ){
            printf("Segundo quadrante\n");
        }else{
            printf("Terceiro quadrante\n");
        }
    }

    return 0;
}