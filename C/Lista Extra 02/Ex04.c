#include <stdio.h>
/*
    Calcule o logaritmo de 10 mais próximo de um dado número n. Para calcular
    este valor conte quantas vezes podese
    dividir o número por 10 até que o
    resultado da divisão inteira seja menor igual a 1.
    Ex: 9/10 = 0 >
    o logaritmo mais próximo é 1 pois foi feita uma divisão por 10 até
    atingir zero.
    Note que este valor também indica o número de dígitos de um valor inteiro.
*/
int logaritimo_mais_proximo(int num){
    int i, cont = 0;
    
    do{
        num = num / 10;
        cont++;
    }while(num > 0);
    return cont;
}
int main(){
    int num;
    scanf("%d", &num);
    printf("Logaritimo de 10 mais proximo %d\n", logaritimo_mais_proximo(num));
    return 0;
}