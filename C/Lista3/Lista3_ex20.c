#include <stdio.h>
#include <stdlib.h>
/*
    Uma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de animais da loja e, para cada animal, 
    leia a informação da espécie do animal (se é gato ou cachorro). 
    Ao final, exiba a quantidade de animais que são gatos e a quantidade de animais que são cachorros existentes na loja
*/
int main(){

    char tipoAnimal;
    int contG =0, contC =0, qtAnimal, i;

    printf("Quantidade de animais: ");
    scanf("%d", &qtAnimal);
    fflush(stdin);

    for(i =0; i< qtAnimal ; i++){
        scanf("%c", &tipoAnimal);
        fflush(stdin);
        if(tipoAnimal == 'g' || tipoAnimal == 'G')
            contG++;
        if(tipoAnimal == 'c' || tipoAnimal == 'C')
            contC++;
    }
    printf("Quantidade de cachorros: %d\nQuantidade de gatos: %d\n", contC, contG);
    return 0;
}