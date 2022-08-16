#include <stdio.h>
/*
    Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos
    na ordem inversa.
*/
int main(){
    int vetor[6], i;

    // leitura do vetor
    for(i=0;i<6;i++){
        do{
            scanf("%d", &vetor[i]);
            if(vetor[i] %2 == 1)
                printf("Digite um numero par!\n");
        }while(vetor[i] % 2 == 1);
    }

    // mostrar na ordem inversa
    for(i = 5; i >= 0; i--){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}