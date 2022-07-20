#include <stdio.h>
/*
    Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva:   
    a) a soma de elementos armazenados neste vetor que são inferiores a 15;  
    b) a quantidade de elementos armazenados no vetor que são iguais a 15;  
    c) a média dos elementos armazenados no vetor que são superiores a 15.  
*/
int main(){

    int vet[10], somaMenorQ15 =0, qtIgual15=0, avgMaior15 =0, qtMaior15=0, i;

    printf("Vetor: \n");
    for(i =0; i< 10; i++){
        printf("vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }
    for(i=0; i<10; i++){
        if(vet[i] < 15)
            somaMenorQ15+=vet[i];
        else if(vet[i]> 15){
            avgMaior15+=vet[i];
            qtMaior15++;
        }
        else
            qtIgual15++;
    }
    printf("Soma dos menores que 15: %d\nQuantidade dos iguais a 15: %d\nMedia dos maiores que 15: %.2f\n", somaMenorQ15, qtIgual15, (float)avgMaior15/qtMaior15);
    return 0;
}