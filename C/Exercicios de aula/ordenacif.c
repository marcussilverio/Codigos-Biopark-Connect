#include <stdio.h>

int main()
{

    int a, b, c, aux;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ( a > b && a > c){
        if ( b < c){
            aux = b;
            b = c;
            c = aux;
        }        
    }
    if ( b > a && b > c){
        aux = b; 
        b = a;
        a = aux;
        if ( b < c){
            aux = b;
            b = c;
            c = aux;
        }        
    }
    if ( c > a && c > b){
        aux = c;
        c = a;
        a = aux;
        if ( b < c){
            aux = b;
            b = c;
            c = aux;
        }        
    }

    printf("%d %d %d\n", c, b, a);
}