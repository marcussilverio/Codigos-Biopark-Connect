#include <stdio.h>
short ehTriangulo(float ladoX, float ladoY, float ladoZ){
    if((ladoX+ladoY) > ladoZ && (ladoX+ladoZ) > ladoY && (ladoY+ladoZ) > ladoX)
        return 1;
    return 0;
}
short equilatero(float ladoX, float ladoY, float ladoZ){
    return (ladoX == ladoY == ladoZ)? 1:0;
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
    printf("lado X: ");
    scanf("%f", &ladoX);
    printf("lado Y: ");
    scanf("%f", &ladoY);
    printf("lado Z: ");
    scanf("%f", &ladoZ);

    if(ehTriangulo(ladoX, ladoY, ladoZ)){
        printf("Eh triangulo!\n");
        printf("Verificando tipo. . . \n");

        if(equilatero(ladoX, ladoY, ladoZ)){
            printf("Triangulo do tipo equilatero\n");
        }else if(escaleno(ladoX, ladoY, ladoZ)){
            printf("Triangulo do tipo escaleno\n");
        }else if(isosceles(ladoX, ladoY, ladoZ)){
            printf("Triangulo do tipo isosceles\n");
        }
    }else{
        printf("Nao eh triangulo\n");
    }
    return 0;
}