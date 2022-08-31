#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Suponha que criamos uma estrutura para armazenar produtos de um supermercado:
    struct Produto{
        char nome[80];
        double preco;
        int quantidade;
    };
    Implemente duas funções, uma que devolve o vetor ordenado por preços e outra que devolve o vetor
    ordenado pela quantidade de itens no estoque. Funções void ordenaPreco(struct Produto vet[], int
    n) e void ordenaQuant(struct Produto vet[], int n).
*/
 struct Produto{
        char nome[80];
        double preco;
        int quantidade;
};
void ordenaPreco(struct Produto vet[], int n);
void ordenaQuant(struct Produto vet[], int n);
void mostraVetor(struct Produto vet[], int n);
int main(){

    struct Produto vet[5];
    
    strcpy(vet[0].nome, "Produto 1");
    vet[0].preco = 10;
    vet[0].quantidade=10;
    strcpy(vet[1].nome, "Produto 2");
    vet[1].preco = 5;
    vet[1].quantidade=5;
    strcpy(vet[2].nome, "Produto 3");
    vet[2].preco = 7;
    vet[2].quantidade=7;
    strcpy(vet[3].nome, "Produto 4");
    vet[3].preco = 1;
    vet[3].quantidade=1;
    strcpy(vet[4].nome, "Produto 5");
    vet[4].preco = 3;
    vet[4].quantidade=3;

    //ordenaPreco(vet,5);
    ordenaQuant(vet,5);
    mostraVetor(vet,5);

    return 0;
}
void ordenaPreco(struct Produto vet[], int n){
    struct Produto aux;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(vet[i].preco > vet[j].preco){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}
void ordenaQuant(struct Produto vet[], int n){
    struct Produto aux;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(vet[i].quantidade > vet[j].quantidade){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}
void mostraVetor(struct Produto vet[], int n){
    for(int i = 0; i < n; i++){
        printf("nome: %s\n", vet[i].nome);
        printf("Quantidade: %d\n", vet[i].quantidade);
        printf("Preco: %2.lf\n", vet[i].preco);
        printf("\n");
    }
}