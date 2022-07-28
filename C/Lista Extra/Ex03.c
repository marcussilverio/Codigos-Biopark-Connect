#include <stdio.h>
int igualOuMaiorFibonacci(int num){
    int termoFibonacci=1, termoAnterior1 =0, termoAnterior2 = 0;
    while(termoFibonacci < num){
        termoAnterior2 = termoAnterior1;
        termoAnterior1 = termoFibonacci;
        termoFibonacci = termoAnterior1 + termoAnterior2;
    }
    if(termoFibonacci == num)
        return num;
    return termoAnterior1 + termoAnterior2;
}

int main(){
    int num;
    scanf("%d", &num);
    printf("%d \n",igualOuMaiorFibonacci(num));
    return 0;
}