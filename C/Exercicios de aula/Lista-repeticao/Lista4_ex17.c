#include <stdio.h>
#include <stdlib.h>
#define P_QUILO 23.59
/*
    Em um restaurante Self-Service, o preço do quilo custa R$ 23,59. Crie um algoritmo que, para cada cliente, 
    leia o peso do prato e valor gasto com bebida e calcule o valor total da conta que o cliente irá pagar [ valor da conta = bebida + (peso * 15) ]. 
    Só encerre a execução quando o peso do prato digitado for igual a 0 e o valor da bebida for também igual a 0.
*/
int main(){

    float valor, peso, total = 0 ;

    do{
        system("cls");
        printf("Valor da bebida: ");
        scanf("%f", &valor);
        printf("Peso do prato: ");
        scanf("%f", &peso);
        total = valor + (peso * P_QUILO);
        printf("Total: %.2f\n", total);
        system("pause");
    }while(valor != 0 && peso != 0);
    return 0;
}