#include <stdio.h>
#include <stdlib.h>

int main(){

    float saldoMedio;
    
    printf("Saldo medio: ");
    scanf("%f", &saldoMedio);
    system("cls");

    if(saldoMedio >= 0 && saldoMedio <= 200){
        printf("Saldo medio: %.2f\n", saldoMedio);
        printf("Valor credito: %.2f\n", saldoMedio*0);
    }else if(saldoMedio > 200 && saldoMedio <= 400){
        printf("Saldo medio: %.2f\n", saldoMedio);
        printf("Valor credito: %.2f\n", saldoMedio*0.20);
    }else if(saldoMedio > 400 && saldoMedio <= 600){
        printf("Saldo medio: %.2f\n", saldoMedio);
        printf("Valor credito: %.2f\n", saldoMedio*0.30);
    }else if(saldoMedio > 600){
        printf("Saldo medio: %.2f\n", saldoMedio);
        printf("Valor credito: %.2f\n", saldoMedio*0.40);
    }
    system("pause");
    return 0;
}