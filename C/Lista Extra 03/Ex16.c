#include <stdio.h>
#define TAM 5
/*
    Faca um programa que leia um vetor de 5 posicoes para numeros reais e, depois, um
    codigo inteiro. Se o codigo for zero, finalize o programa; se for 1, mostre o vetor na ordem
    direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2
    escreva uma mensagem informando que o codigo e invalido.
*/
void leVetor(double vetor[], int tam);
void imprimeNormal(double vetor[], int tam);
void imprimeInverso(double vetor[], int tam);
int leCodigo();
void defineCaso(double vetor[], int tam);

int main(){
    double vetor[TAM];
    leVetor(vetor, TAM);
    defineCaso(vetor, TAM);
    return 0;
}
void leVetor(double vetor[], int tam){
    int i;
    for(i=0; i< tam; i++){
        scanf("%lf", &vetor[i]);
    }
}
int leCodigo(){
    int codigo;
    do{
        printf("Digite o codigo\n1- Para ordem normal\n2- Para ordem inversa\n");
        scanf("%d", &codigo);
        if(codigo != 1 && codigo != 2){
            printf("Codigo invalido.\n");
        }
    }while(codigo != 1 && codigo != 2);
    return codigo;
}
void defineCaso(double vetor[], int tam){
    int codigo = leCodigo();
    switch (codigo){
    case 1:
        imprimeNormal(vetor, tam);
        break;
    case 2:
        imprimeInverso(vetor, tam);
        break;
    }
}
void imprimeNormal(double vetor[], int tam){
    for(int i=0; i< tam; i++){
        printf("%.2lf ", vetor[i]);
    }
    printf("\n");
}
void imprimeInverso(double vetor[], int tam){
    for(int i=tam-1; i>= 0; i--){
        printf("%.2lf ", vetor[i]);
    }
    printf("\n");
}