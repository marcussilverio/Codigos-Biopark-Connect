#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor;
    int op1, op2 = 0;

    do{
        system("cls");
        printf("Valor do produto: ");
        scanf("%f", &valor);
        system("cls");
        printf("----FORMA DE PAGAMENTO----\n");
        printf("1 - A vista, dinheiro ou cheque\n");
        printf("2 - A vista, cartao\n");
        printf("0 - Sair\n");
        scanf("%d", &op1);

        if (op1 == 1){
            system("cls");
            valor = valor * 0.9;
            fflush(stdin);
            printf("1 - Em duas vezes sem juros\n");
            printf("2 - Em duas vezes, 10%% de juros\n");
            scanf("%d", &op2);
            if (op2 == 1){
                printf("Valor para pagamento:2x de %.2f\n", valor/2);
            }else if(op2 == 2){
                printf("Valor para pagamento: %.2f\n", (valor*1.1)/2);
            }
        }else if (op1 == 2){
            system("cls");
            valor = valor * 0.85;
            printf("1 - Em duas vezes sem juros\n");
            printf("2 - Em duas vezes, 10%% de juros\n");
            scanf("%d", &op2);
            if (op2 == 1){
                printf("Valor para pagamento:2x de %.2f\n", valor/2);
            }else if(op2 == 2){
                printf("Valor para pagamento: %.2f\n", (valor*1.1)/2);
            }
        }else if (op1 != 0){
            printf("Opcao invalida\n");
        }
        system("pause");
    }while(op1 != 0);
    return 0;
}