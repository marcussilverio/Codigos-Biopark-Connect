#include <stdio.h>
/*
    Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor 
    após a retirada dos nulos e negativos.
*/
int main(){

    int D[10], DsemN[10], i, c=0;

    for(i =0; i< 10; i++){
        scanf("%d", &D[i]);
    }

    for(i = 0; i < 10; i++){
        if(D[i] > 0){
            DsemN[c] = D[i];
            c++;
        }
    }
    for(i =0 ; i< c; i++){
        printf("%d ", DsemN[i]);
    }

}