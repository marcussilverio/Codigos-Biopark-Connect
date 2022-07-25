#include <stdio.h>
#define MAX 10
/*
    Elabore um algoritmo que leia um vetor e em seguida apresente o vetor ordenado – use o método de ordena-
    ção que preferir.
*/
int main(){
    int vet[MAX], i , j, aux;

    for(i =0; i< MAX; i++){
        scanf("%d", &vet[i]);
    }

    //ordenacao bubble sort
    for(i =0; i < MAX ; i++){
        for( j=i+1 ; j < MAX ; j++){
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    for(i =0; i< MAX ; i++){
        printf("%d ", vet[i]);
    }
    

    return 0;
}