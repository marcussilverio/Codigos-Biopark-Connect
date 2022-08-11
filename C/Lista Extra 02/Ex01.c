#include <stdio.h>
/*
    Dados três números inteiros digitados pelo usuário diga qual é o maior e o
    menor entre eles.
*/
int maior(int,int,int);
int menor(int,int,int);
int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("O maior numero eh %d e o menor eh %d\n", maior(a,b,c), menor(a,b,c));
    return 0;
}
int maior(int a, int b, int c){
    int maior = a;
    if(maior < b){
        maior = b;
    }
    if(maior < c){
        maior = c;
    }
    return maior;
}
int menor(int a, int b, int c){
    int menor = a;
    if(menor > b)
        menor = b;
    if(menor > c){
        menor = c ;
    }
    return menor;
}