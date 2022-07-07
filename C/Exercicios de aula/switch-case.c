#include <stdio.h>
#include<stdlib.h>
/*
    cardapio: 4 itens, mostra o escolhido e sai quando a quinta opçao for selecionada.
*/

int main(){

    int op;

    do{
        system("cls");
        printf("1 - Dogao\n2 - Podrao\n3 - Pizza\n4 - Refri\n0 - Sair\n");
        scanf("%d", &op);
        switch(op){
            case 1: printf("Dogao\n");break;
            case 2: printf("Podrao\n");break;
            case 3: printf("Pizza\n");break;
            case 4: printf("Refri\n");break;
            case 0: break;
            default: printf("Opcao invalida!\n");
        }
        system("pause");
    }while(op != 0);
    return 0;
}