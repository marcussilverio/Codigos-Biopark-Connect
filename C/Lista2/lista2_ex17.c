#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//apesar do exercicio pedir um de cada, vou fazer recebendo varios pedidos
void calculaCarrinho(int* pedidos){
    float total=0;

    total = pedidos[0]*11 + pedidos[1]*8.5 + pedidos[2]*8 + pedidos[3]*9 + pedidos[4]*10 + pedidos[5]*4.5;

    printf("Total do pedido: R$%.2f\n", total);

}
void mostraCarrinho(int* pedidos){
    int i;
    printf("Cachorro quente: %d\n", pedidos[0]);
    printf("Bauru: %d\n", pedidos[1]);
    printf("Misto quente: %d\n", pedidos[2]);
    printf("Hamburger: %d\n", pedidos[3]);
    printf("Cheeseburger: %d\n", pedidos[4]);
    printf("Refrigerante: %d\n", pedidos[5]);
}
void addCarrinho(int* pedidos){
    int op;
    do{
        system("cls");
        printf("1 - Cachorro quente\n");
        printf("2 - Bauru\n");
        printf("3 - Misto quente\n");
        printf("4 - Hamburger\n");
        printf("5 - Cheeseburger\n");
        printf("6 - Refrigerante\n");
        scanf("%d", &op);
        if(op >= 0 && op < 7){
            pedidos[op-1]++;
            printf("Item adicionado\n");
            system("pause");
            system("cls");
            printf("1 - Para continuar adicionando\n2 - Para ver o carrinho\n0 - Para sair\n");
            scanf("%d", &op);
            if(op == 2){
                mostraCarrinho(pedidos);
                sleep(5);
            }
        }else
            printf("Opcao invalida.\n");
        sleep(1);
    }while(op != 0);
}
int main(){

    int *pedidos, op;

    pedidos = (int*) calloc(6, sizeof(int));
    system("cls");

    do{
        printf("1 - Adicionar item ao Carrinho:\n2 - Ver o carrinho\n3 - Calcular valor do pedido\n4 - Para finalizar\n0 - Sair\n");
        scanf("%d", &op);

        if(op == 0)
            return 0;
        else if(op == 1)
            addCarrinho(pedidos);
        else if(op == 2)
            mostraCarrinho(pedidos);
        else if(op == 3)
            calculaCarrinho(pedidos);
        else if(op == 4){
            calculaCarrinho(pedidos);
            printf("O pedido sera preparado em breve, obrigado pela preferencia e volte sempre.\n");
            op = 0;
        }else{
            printf("Opcao invalida\n");
        }
        system("pause");
        system("cls");
    }while(op != 0);

    return 0;
}