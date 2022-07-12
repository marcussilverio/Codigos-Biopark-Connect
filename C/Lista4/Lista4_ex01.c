#include <stdio.h>
/*
    Escreva um algoritmo que exiba 20 vezes a mensagem informando qual vez está sendo escrita.
*/
int main(){

    int i = 0;
    for(; i<20 ; i++){
        printf("Esta eh a mensagem %d\n", i+1);
    }
    return 0;
}