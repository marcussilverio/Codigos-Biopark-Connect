#include <stdio.h>
#include <math.h>
/*
    Escreva uma função chamada teste que recebe um valor inteiro positivo n como parâmetro. Sua
    função deve retornar um valor inteiro b tal que b^k = n para algum inteiro k, e b seja o menor possível.
*/
int teste (int n){
    int b, k, i;
    if( n == 1)\
        return 1;

    for ( i =n ; i > 1; i--){
        for(k = 0; pow(i, k) <= n ; k++){
            if(pow(i ,k)== n){
                b = i;
            }
        }

    }
    return b;
}
int main(){
    int n, b;
    do{
        printf("digite o N: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("N precisa ser necessariamente maior que 0\n");
    }while (n <= 0);
    b = teste(n);
    printf("%d", b);
    return 0;
}