#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Suponha que criamos uma estrutura para armazenar dados de pessoas e um vetor para armazenar
    dados de várias pessoas:

struct Pessoa{
    int rg;
    int cpf;
    char nome[80];
};

struct Pessoa cadastro[100];

    Algoritmos e Lógica de Programação
    Suponha que o vetor esteja ordenado em ordem crescente por valor de RG. Implemente uma função
    de busca por RG, que opera como a busca binária, e que caso exista uma pessoa no cadastro com o
    RG a ser buscado, devolve o índice deste cadastro e caso não exista o RG a ser buscado, devolve -1.
*/
struct Pessoa{
    int rg;
    int cpf;
    char nome[80];
};

void preencheVetor(struct Pessoa cadastro[], int tam);
short buscaBinaria(struct Pessoa cadastro[], int tam, int num);

int main(){
    
    struct Pessoa cadastro[100];
    preencheVetor(cadastro, 100);
    for(int i=0; i<100; i++){
   printf("Resultado: %d\n", buscaBinaria(cadastro, 100,i ));
    }
    return 0;
}
void preencheVetor(struct Pessoa cadastro[], int tam){
    for(int i=0 ; i<100 ; i++){
        cadastro[i].rg = i;
        cadastro[i].cpf = i+1;
        strcpy(cadastro[i].nome, "Pessoa");
    }

}
short buscaBinaria(struct Pessoa cadastro[], int tam, int num){
    int comeco = 0, fim = tam-1, meio = tam/2;

    while((fim+comeco)/2 >= 0){
        if(cadastro[meio].rg == num){
            return meio;
        }else if(cadastro[meio].rg > num){
            fim = meio-1;
            meio = ((fim+comeco)/2);
        }else if(cadastro[meio].rg < num){
            comeco = meio+1;
            meio = ((fim + comeco)/2);
        }
        if(fim < comeco || comeco > fim)
            return -1;
    }
}