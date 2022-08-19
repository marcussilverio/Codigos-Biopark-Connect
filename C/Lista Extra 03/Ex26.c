#include<stdio.h>
#include<math.h>
#define TAM 4
/*
    Faca um programa que calcule o desvio padrao de um vetor v contendo n = 10 numeros,
    onde m e a media do vetor.
*/
void leVetor(double vetor[], int tam);
double desvioPadrao(double vetor[], int tam);
double mediaDoVetor(double vetor[], int tam);

int main(){
    double vetor[TAM], dp;

    leVetor(vetor, TAM);
    dp = desvioPadrao(vetor, TAM); 

    printf("Desvio padrao = %lf", dp);
    return 0;
}
void leVetor(double vetor[], int tam){
    for(int i=0; i< tam; i++){
        scanf("%lf", &vetor[i]);
    }
}

double desvioPadrao(double vetor[], int tam){
    double dp, distancia=0, media;

    media = mediaDoVetor(vetor, tam);
    for(int i=0; i< tam; i++){
        distancia+=pow((vetor[i] - media),2);
    }
    dp = distancia/(tam-1.0);
    dp = sqrt(dp);
    return dp;
}
double mediaDoVetor(double vetor[], int tam){
    double media=0;

    for(int i=0; i<tam ;i++){
        media+=vetor[i];
    }
    media = media/tam;
    return media;
}
