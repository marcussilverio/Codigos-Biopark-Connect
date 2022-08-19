#include <stdio.h>
#include <stdlib.h>
/*
    Escreva um programa que leia um numero inteiro positivo n e em seguida imprima n
    linhas do chamado Triangulo de Pascal:
    1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
    1 5 10 10 5 1
    ...
*/
void imprimeTrianguloPascal(int num);

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    imprimeTrianguloPascal(num);

    return 0;
}
void imprimeTrianguloPascal(int num){

    int i, j , **triangulo;
    // alocacao dinamica de matriz de ordem [num x num]
    triangulo = (int**) malloc (num*sizeof(int*));
    triangulo[0] = (int*) malloc (num*num*sizeof(int));
    for(i=1 ; i< num; i++){
        triangulo[i] = triangulo[0]+i*num;
    }

    // calcula o triangulo de pascal
    triangulo[0][0] = 1;
    for (i = 1; i < num; i++)
    {
        triangulo[i][0] = 1;
        triangulo[i][i] = 1;
        for (j = 1; j < i; j++)
        {
            triangulo[i][j] = triangulo[i - 1][j] + triangulo[i - 1][j - 1];
        }
    }

    // imprime a matriz com os numeros do triangulo de pascal
    for (i = 0; i < num; i++) {
        for (j = 0; j <= i; j++) {
            printf("%3d", triangulo[i][j]);
        }
        printf("\n");
    }
}