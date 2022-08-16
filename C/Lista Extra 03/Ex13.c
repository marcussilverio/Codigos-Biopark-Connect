#include <stdio.h>
/*
    Fazer um programa para ler 5 valores e, em seguida, mostrar a posic¸ ˜ao onde se encontram
    o maior e o menor valor.
*/
int indiceMaior(int vetor[]);
int indiceMenor(int vetor[]);
int main(){
    int vetor[5],i;

    // leitura do vetor
    for(i =0; i< 5; i++){
        scanf("%d", &vetor[i]);
    }
    printf("maior: %d, menor: %d", indiceMaior(vetor), indiceMenor(vetor));
    return 0;
}
// procura o indice do maior valor
int indiceMaior(int vetor[]){
    int m = vetor[0], indice = 0;
    for(int i=0; i<5; i++)
        if(m < vetor[i]){
            m = vetor[i];
            indice = i;
        }
    
    return indice;
}
// procura o indice do menor valor
int indiceMenor(int vetor[]){
    int m = vetor[0], indice = 0;
    for(int i=0; i<5; i++)
        if(m > vetor[i]){
            m = vetor[i];
            indice = i;
        }
    
    return indice;
}
