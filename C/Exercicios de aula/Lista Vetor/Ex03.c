#include <stdio.h>
#include <stdlib.h>
/*
    Criar um vetor A com 8 elementos inteiros. Construir um vetor B de mesmo tipo e tamanho e com os elemen-
    tos do vetor A multiplicados por 2, ou seja: B[i] = A[i] * 2.   
*/
int main(){
    int vetA[8], vetB[8], i;

    printf("Vetor A:\n");
    for(i=0; i<8; i++){
        printf("%d: ", i);
        scanf("%d", &vetA[i]);
        fflush(stdin);
    }
    //Multiplica o valor de A por 2 e atribui a B
    for(i = 0; i< 8; i++){
        vetB[i] = vetA[i]*2;
        printf("%d\n", vetB[i]);
    }
    return 0;
}