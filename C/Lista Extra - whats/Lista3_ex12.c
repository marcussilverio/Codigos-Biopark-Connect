#include <stdio.h>
/*
    Le os 3 lados de um triangulo e diz o tipo correspondente.
*/

short equilatero(float ladoX, float ladoY, float ladoZ){
    return (ladoX == ladoY && ladoY == ladoZ)? 1:0;
}
short escaleno(float ladoX, float ladoY, float ladoZ){
    if(ladoZ != ladoY && ladoY != ladoZ)
        return 1;
    return 0;
}
short isosceles(float ladoX, float ladoY, float ladoZ){
    if(!escaleno(ladoX, ladoY,ladoZ))
        if(!equilatero(ladoX, ladoY, ladoZ)){
            return 1;
        }else{
            return 0;
        }    
    return 0;
}
int main(){

    float ladoX, ladoY, ladoZ;
    scanf("%f %f %f", &ladoX,&ladoY,&ladoZ);       

    if(equilatero(ladoX, ladoY, ladoZ)){
        printf("Triangulo do tipo equilatero\n");
    }else if(escaleno(ladoX, ladoY, ladoZ)){
        printf("Triangulo do tipo escaleno\n");
    }else if(isosceles(ladoX, ladoY, ladoZ)){
        printf("Triangulo do tipo isosceles\n");
    }
  
    return 0;
}