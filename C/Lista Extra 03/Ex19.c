#include <stdio.h>
/*
    Faca um vetor de tamanho 50 preenchido com o seguinte valor: (i+5 * i)%(i+1), sendo
    i a posicao do elemento no vetor. Em seguida imprima o vetor na tela.   
*/
int main(){
    int vetor[50];
    for(int i=0; i< 50; i++){
        vetor[i] = (i+5*i)%(i+1);
    }
    for(int i=0; i<50; i++){
        printf("%d ", vetor[i]);
        if((i+1)%5==0)
            printf("\n");
    }
    printf("\n");
    return 0;
}