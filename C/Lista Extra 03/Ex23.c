#include <stdio.h>
#define TAM 5
/*
    Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto
    escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o
    produto escalar, sendo que o produto escalar e dado por: x1 * y1 + x2 * y2 + ::: + xn * yn.
*/
void leVetor(double vetor[], int tam);
double calculaProdutoEscalar(double vetorX[], double vetorY[], int tam);

int main(){

    double x[TAM], y[TAM], pdtEscalar;

    printf("Primeiro conjunto: \n");
    leVetor(x, TAM);
    
    printf("Segundo conjunto: \n");
    leVetor(y, TAM);

    pdtEscalar = calculaProdutoEscalar(x,y,TAM);

    printf("Produto escalar = %.2lf\n", pdtEscalar);

    return 0;
}
void leVetor(double vetor[], int tam){
    for(int i=0; i< tam; i++){
        scanf("%lf", &vetor[i]);
    }
}
double calculaProdutoEscalar(double vetorX[], double vetorY[], int tam){
    double pdtEscalar = 0;
    for(int i=0; i< tam; i++){
        pdtEscalar+= (vetorX[i]*vetorY[i]);
    }
    return pdtEscalar;
}