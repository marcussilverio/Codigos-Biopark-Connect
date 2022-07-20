#include <stdio.h>
/*  
    Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor A de 10 elementos con-
    tendo uma aposta. A seguir imprima quantos pontos fez o apostador.
*/
int main(){


    int R[5], A[10], i, j, contador=0;;
    printf("aposta: \n");
    for(i =0; i<5 ; i++){
        scanf("%d", &R[i]);
    }
    printf("Resultado: \n");
    for(i =0; i<10 ; i++){
        scanf("%d", &A[i]);
    }

    for(i = 0 ; i< 10 ; i++){
        for(j=0; j< 5; j++){
            if(R[j] == A[i]){
                contador++;
                i++;
            }
        }
    }    
    printf("Acertos: %d ", contador);
    

    return 0;
}