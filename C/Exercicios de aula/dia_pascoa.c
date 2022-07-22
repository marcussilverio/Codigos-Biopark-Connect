#include <stdio.h>

int main(){

    int Y, G, C, X, Z, E, N, D;

    // Ano em que se deseja calcular a data da Pascoa
    Y = 2023; 
    // Calculo do numero aureo
    G = (Y%19)+1; 
    // Calculo do seculo
    C = (Y/100)+1; 
    // Calculo de correcoes
    X = ((3*C)/4)-12; 
    // Calculo de correcoes
    Z = ((8*C+5)/25)-5; 
    // Calculo da Epacta
    E = (11*G+20+Z-X)%30; 
    if((E==25&&G>11)||E==24)   
        E++;
    // Calculo da lua cheia
    N = 44-E; 
    if(N<21)
        N+=30;
    // Calculo do domingo
    D = ((5*Y)/4)-(X+10); 
    // Calculo do mes
    N = N+7-((D+N)%7);

    // Resultado
    if(N>31)
        printf("A pascoa sera no dia %d de abril", N-31 );
    else
        printf("A pascoa sera no dia %d de marco", N);  

    return 0;
}