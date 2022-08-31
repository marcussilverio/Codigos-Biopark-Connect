#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Suponha que criamos uma estrutura para armazenar Datas:
struct Data{
    int dia;
    int mes;
    int ano;
};
Implemente um algoritmo que receba um vetor de Datas como parâmetro e que retorne as datas em
ordem cronológica (crie uma função com cabeçalho: void ordena(struct Data vet[], int tam).
Dica: Ordene o vetor separadamente por cada um dos campos.
*/
struct Data{
    int dia;
    int mes;
    int ano;
};
void ordena(struct Data vet[], int tam);
void imprime(struct Data vet[], int tam);
int main(){
    struct Data vet[3];

    vet[0].dia = 10;
    vet[0].mes = 10;
    vet[0].ano = 2020;
    vet[1].dia = 10;
    vet[1].mes = 10;
    vet[1].ano = 2021;
    vet[2].dia = 10;
    vet[2].mes = 10;
    vet[2].ano = 2022;
    ordena(vet, 3);
    imprime(vet, 3);
    return 0;
}
void ordena(struct Data vet[], int tam){
    struct Data aux;
    for(int i = 0; i < tam; i++){
        for(int j = i+1; j < tam; j++){
            if(vet[i].ano > vet[j].ano ){
                aux = vet[i];
                vet[i]= vet[j];
                vet[j]= aux;
            }else if( vet[i].mes > vet[j].mes){
                aux = vet[i];
                vet[i]= vet[j];
                vet[j]= aux;
            }else if(vet[i].dia > vet[j].dia){
                aux = vet[i];
                vet[i]= vet[j];
                vet[j]= aux;
            }
        }
    }
}
void imprime(struct Data vet[], int tam){
    for(int i = 0; i < tam; i++){
        printf("%d/%d/%d\n", vet[i].dia, vet[i].mes, vet[i].ano);
    }
}