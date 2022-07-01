#include <stdio.h>

int main(){
    int m001, m005, m010, m025, m050, m100; 
    float saldo = 0;

    printf("Quantidade de moedas de R$0,01: ");
    scanf("%d", &m001);
    printf("Quantidade de moedas de R$0,05: ");
    scanf("%d", &m005);
    printf("Quantidade de moedas de R$0,10: ");
    scanf("%d", &m010);
    printf("Quantidade de moedas de R$0,25: ");
    scanf("%d", &m025);
    printf("Quantidade de moedas de R$0,50: ");
    scanf("%d", &m050);
    printf("Quantidade de moedas de R$1,00: ");
    scanf("%d", &m100);

    saldo = m001*0.01 + m005*0.05 + m010*0.1 + m025*0.25 + m050*0.5 + m100;
    printf("Saldo total: R$%.2f\n", saldo);
}