#include <stdio.h>
/*
    Escreva um algoritmo que simule o funcionamento de um caixa de supermercado. O seu algoritmo deve 
    receber do a informação de quantos produtos o cliente comprou e, para cada produto, deverá ler o seu preço. 
    Ao final, deverá informar quanto o cliente deve pagar pelas compras.
*/
int main(){

    int quantidade;
    float preco, total=0;
    do{
        printf("Quantidade: ");
        scanf("%d", &quantidade);
        if(quantidade){
            printf("Valor: ");
            scanf("%f", &preco);
            total += (quantidade*preco);
        }
    }while(quantidade != 0);
    printf("Valor total: %.2f", total);
    return 0;
}