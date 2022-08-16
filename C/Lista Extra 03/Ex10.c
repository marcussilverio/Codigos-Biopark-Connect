#include <stdio.h>
/*
    Faca um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
    e imprima a media geral.
*/
int main(){
    int vetor[15], i, media=0;

    // leitura do vetor
    for(i=0;i<15;i++){
        printf("Nota %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // soma todos os numeros para o calculo da media
    for(i=0; i<15; i++){
        media+=vetor[i];
    }

    // calculo da media geral
    media /=15;

    printf("media geral: %d\n", media);
    return 0;
}