#include <stdio.h>
/*
    Escreva uma função que computa a potência ab para valores a (double) e b (int) passados por parâmetro
(não use bibliotecas como math.h). Use a função anterior e crie um programa que imprima todas
as potências: 2^0, 2^1;..., 2^10; 3^0, ..., 3^10, ..., 10^10
*/
double potencia(double a, int b){
    int i, resultadoPotencia=1;
    for(i=0; i< b; i++){
        resultadoPotencia *= a;
    }
    return resultadoPotencia;
}
void imprimeTodasAsPotencias(){
    int i, j;
    for(i = 2; i<11; i++){
        for(j=0; j<11 ; j++){
            printf("%d^%d: %.lf\n", i, j, potencia(i,j));
        }
    }
}
int main(){

    imprimeTodasAsPotencias();
    return 0;
}