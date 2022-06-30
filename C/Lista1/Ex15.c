#include<stdio.h>

int main(){

    int Carlos, Andre;
    float Felipe, conta;

    printf("Valor da conta: ");
    scanf("%f", &conta);

    Carlos = Andre = (int)(conta/3);
    Felipe = conta - Carlos - Andre;

    printf("Carlos: %d.00\nAndre: %d.00\nAndre: %.2f\n", Carlos, Andre, Felipe);

    return 0;
}