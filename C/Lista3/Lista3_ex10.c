#include <stdio.h>
#include <stdlib.h>
/*
    Le um caractere C ou F e um valor de temperatura e converte de 
    acordo com a opção escolhida. 
    
*/
int main(){

    char unMed;
    float temp;

    printf("F - para converter para Fahrenheit\nC - para converter para Celsius\n");
    scanf("%c", &unMed);
    fflush(stdin);

    if( unMed == 'f' || unMed == 'F'){
        printf("Temperatura em Celsius: ");
        scanf("%f", &temp);

        temp = temp * 1.8 + 32;
    }else if( unMed == 'c' || unMed == 'C'){
        printf("Temperatura em Celsius: ");
        scanf("%f", &temp);

        temp = (5/9) * (temp-32);
    }

    printf("Temperatura convertida: %.2f",temp);

    return 0;
}