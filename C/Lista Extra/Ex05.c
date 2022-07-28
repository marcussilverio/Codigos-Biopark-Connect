#include <stdio.h>
#include <math.h>
float raiz(float num){
     return pow(num, 1/2);
}

int main(){
    float num;
    scanf("%f", &num);
    printf("%.2lf\n", raiz(num));
}