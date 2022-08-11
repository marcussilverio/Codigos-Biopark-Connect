#include <stdio.h>

int main(){

    int ano;

    scanf("%d", &ano);

    if(ano % 400 == 0){
        printf("Eh ano bissexto\n");
    }else if( ano % 4 == 0 && ano % 100 != 0){
        printf("Eh ano bissexto\n");
    }else{
        printf("Nao eh ano bissexto\n");
    }

    return 0;
}