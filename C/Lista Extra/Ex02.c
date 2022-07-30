#include <stdio.h>
/*
    Escreva uma função que computa o fatorial de um número inteiro n passado por parâmetro.
*/
unsigned long long int fat(int num){
    if(num == 1)
        return 1;
    return num*fat(num-1);
}
void imprimeFatorialAte20(){
    int i;
    for(i=0; i< 20; i++){
        printf("Fatorial de %d: %llu\n", i+1, fat(i+1));
    }
}
int main(){

    //fatorial de 20 eh o limite.
    imprimeFatorialAte20();   
    return 0;
}