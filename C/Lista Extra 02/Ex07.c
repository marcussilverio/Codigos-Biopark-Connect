#include <stdio.h>
/*
    Dado um número n, escreva na tela um “X” formado por asteriscos (ou
    qualquer caracter de sua preferência !). Permita que apenas números ímpares
    sejam utilizados como entrada.
*/
void imprime_x(int num);
int main(){
    int num;
    do{
        printf("Digite o numero: ");
        scanf("%d", &num);
        if(num%2 == 0)
            printf("Por favor, insira um numero impar\n");
    }while(num%2 == 0);
    imprime_x(num);
    return 0;
}
void imprime_x(int num){
    int i, j;

    for(i = 0; i< num ; i++){
        for(j=0; j < num; j++ ){
            if(i == j || j == (num-i-1))
                printf("*");
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}