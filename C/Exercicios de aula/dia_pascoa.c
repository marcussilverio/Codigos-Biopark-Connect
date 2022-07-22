#include <stdio.h>

int main(){

    int Y, G, C, X, Z, E, N, D;
    Y = 2023;
    G = (Y%19)+1;
    C = (Y/100) + 1;
    X = ((3*C)/4)-12;
    Z = ((8*C +5)/25) - 5;
    E = (11 * G + 20 + Z - X) % 30 ;
    if((E ==25 && G>11)|| E == 24)
        E++;
    N=44-E;
    if(N<21)
        N+=30;
    D = ((5*Y)/4) - (X+10);
    N = N+7 - ((D+N)%7);
    if(N>31)
        printf("A pascoa sera no dia %d de abril", N-31 );
    else
        printf("A pascoa sera no dia %d de marco", N);  

    return 0;
}