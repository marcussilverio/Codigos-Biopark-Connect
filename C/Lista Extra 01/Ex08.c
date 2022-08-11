#include <stdio.h>
/*
    Escreva uma função chamada teste que recebe um valor inteiro n (positivo ou negativo) como parâmetro.
    Sua função deve imprimir todos os valores a e b (inclusive negativos) tais que a * b = n.   
*/
void teste( int n){
    int i, j;
    if( n > 0){ // verifica se n eh positivo
        for(i = n; i > 0; i--){ // percorre todos os valores entre n e 0
            if(n % i == 0){ // verifica se n eh divisivel por i
                for( j = 0; j <= n; j++){ // percorre todos os valores positivos entre n e 0
                    if ( (i * j) == n ){ // acha o valor multiplicador de i que resulte em n
                        printf("%d * %d = %d\n", i, j, n); // printa o valor real achado
                        printf("%d * %d = %d\n", -i, -j, n); // printa o inverso do valor real achado
                    }
                }
            }
        }        
    }else if(n < 0) { // verifica se n eh negativo
        for(i = n; i < 0; i++){ // percorre todos os valores entre n e 0
            if(n % i == 0){ // verifica se n eh divisivel por i
                for( j = 0; j <= -n; j++){  // percorre todos os valores positivos entre n e 0
                    if ( (i * j) == n ){  // acha o valor multiplicador de i que resulte em n
                        printf("%d * %d = %d\n", i, j, n); // printa o valor real
                        printf("%d * %d = %d\n", -i, -j, n); // printa o valor inverso
                    }
                }
            }
        }        
    }else // caso o n seja 0
        printf("Todos o valores que multiplicados por 0 resultam em 0\n");
}
int main(){
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);
    teste(n);
}