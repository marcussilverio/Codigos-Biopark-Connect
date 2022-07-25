#include <stdio.h>
/*
    Ler um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas. Escreva um 
    programa que determine e escreva a menor e a maior idades e suas respectivas posições.
*/
int main(){
    
    int idade[10], indiceMenor, menor, indiceMaior, maior, i;

    for(i=0; i< 10; i++){
        printf("Idade pessoa %d: ", i);
        scanf("%d", &idade[i]);
    }
    menor = maior = idade[0];
    indiceMenor = indiceMaior = 0;
    for(i =1; i< 10; i++){
        if(menor > idade[i]){
            menor = idade[i];
            indiceMenor =i;
        }
        if(maior < idade[i]){
            maior = idade[i];
            indiceMaior =i;
        }
    }
    printf("Maior idade %d na posicao %d\nMenor idade %d na posicao %d\n", maior, indiceMaior, menor, indiceMenor);
    return 0;
}