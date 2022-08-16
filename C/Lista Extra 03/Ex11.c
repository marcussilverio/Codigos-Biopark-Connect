#include<stdio.h>
/*
    Faca um programa que preencha um vetor com 10 numeros reais, calcule e mostre a
    quantidade de numeros negativos e a soma dos numeros positivos desse vetor.
*/
int main(){

    double vetor[10], soma =0;
    int cont=0, i;

    // leitura do vetor
    for(i =0; i< 10; i++){
        scanf("%lf", &vetor[i]);
    }

    // calculo da quantidade de negativos e soma dos positivos

    for(i=0;i<10;i++){
        if(vetor[i] < 0)
            cont++;
        else if(vetor[i] > 0){
            soma+=vetor[i];
        }
    }

    printf("Quantidade de negativos: %d, soma dos positivos: %.2lf", cont, soma);
    return 0;
}