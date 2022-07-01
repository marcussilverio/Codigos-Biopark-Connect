#include <stdio.h>
#include <stdlib.h>
float CpF(float c){

    return c*1.8 + 32;
}
float FpC(float f){
    return (f - 32)/1.8;
}
int main(){

    float celsius, fahrenheit;
    int op = 0;

    do{
        system("cls");
        printf("Celsius para Fahrenheit digite - 1\nFahrenheit para Celsius digite - 2\nPara sair digite - 0\nOpcao: ");
        scanf("%d", &op);

        if(op == 1){
            printf("Temperatura em Celsius: ");
            scanf("%f", &celsius);
            printf("A temperatura em graus Fahrenheit eh: %.2f F\n", CpF(celsius));
        }else if(op == 2){
            printf("Temperatura em Fahrenheit: ");
            scanf("%f", &fahrenheit);
            printf("A temperatura em graus Celsius eh: %.2f C\n", FpC(fahrenheit));
        }else if( op != 0){
            printf("Opcao invalida!");
        }
        printf("Para converter novamente digite - 1\nPara sair digite - 0\n");
        scanf("%d", &op);

    }while(op != 0);

    return 0;
}