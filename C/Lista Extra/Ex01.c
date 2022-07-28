#include <stdio.h>
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