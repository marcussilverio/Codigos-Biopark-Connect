#include <stdio.h>
#define LIN 10
#define COL 2
/*
    Faca um programa que leia dez conjuntos de dois valores, o primeiro representando
    o numero do aluno e o segundo representando a sua altura em metros. Encontre o 
    aluno mais baixo e o mais alto. Mostre o numero do aluno mais baixo e do mais 
    alto, juntamente com suas alturas.
*/
void leMatriz(float matriz[][COL], int lin, int col);
int buscaMenor(float matriz[][COL], int lin, int col);
int buscaMaior(float matriz[][COL], int lin, int col);
void imprimeVetor(float matriz[][COL], int lin, int col);

int main(){
    float matriz[LIN][COL];
    int indiceMenor, indiceMaior;

    leMatriz(&matriz[0], LIN, COL);
    indiceMaior = buscaMaior(matriz, LIN, COL);
    indiceMenor = buscaMenor(matriz, LIN, COL);
    printf("Codigo do aluno mais alto %.0f de altura: %.2f\n", matriz[indiceMaior][0], matriz[indiceMaior][1]);
    printf("Codigo do aluno mais baixo %.0f de altura: %.2f\n", matriz[indiceMenor][0], matriz[indiceMenor][1]);

    return 0;
}
void leMatriz(float matriz[][COL], int lin, int col){
    for(int i=0; i< lin; i++){
        for(int j=0; j<col; j++){
            if(j == 0)
                printf("Codigo do aluno %d: ", i+1);
            else
                printf("Altura do aluno %d: ", i+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    imprimeVetor(matriz, lin, col);
}
void imprimeVetor(float matriz[][COL], int lin, int col){
    for(int i=0; i< lin; i++){
        for(int j=0; j<col; j++){
            printf("%.0f ", matriz[i][j]);
        }
        printf("\n");
    }
}
int buscaMenor(float matriz[][COL], int lin, int col){
    float menor = matriz[0][1], indice=0;
    for(int i=1; i< lin; i++){
        if(menor > matriz[i][1]){
            menor = matriz[i][1];
            indice = i;
        }
    }
    return indice;
}
int buscaMaior(float matriz[][COL], int lin, int col){
    float maior = matriz[0][1], indice=0;
    for(int i=1; i< lin; i++){
        if(maior < matriz[i][1]){
            maior = matriz[i][1];
            indice = i;
        }
    }
    return indice;
}