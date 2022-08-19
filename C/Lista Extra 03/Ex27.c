#include <stdio.h>
#define MAX 10
/*
    Leia 10 numeros inteiros e armazene em um vetor. Em seguida escreva os elementos
    que sao primos e suas respectivas posicoes no vetor.
*/
void leVetor(int vetor[], int tam);
short ehPrimo(int num);
int vetorDePrimos(int vetor[], int vetorDePrimos[], int tam);

int main(){
    int vetor[MAX], vetDePrimos[MAX], tamVetorDePrimos;

    leVetor(vetor, MAX);
    tamVetorDePrimos = vetorDePrimos(vetor, vetDePrimos, MAX);

    printf("Vetor resultante: ");
    for(int i=0; i< tamVetorDePrimos; i++){
        printf("%d ", vetDePrimos[i]);
    }
    printf("\n");
    return 0;
}
void leVetor(int vetor[], int tam){
    printf("Digite o vetor:\n");
    for(int i=0; i< tam; i++)
        scanf("%d", &vetor[i]);
}
short ehPrimo(int num){
    int cont=0;
    for(int i=1 ; i <= num; i++){
        if(num%i == 0)
            cont++;
    }
    if(cont <= 2)
        return 1;
    return 0;
}
int vetorDePrimos(int vetor[], int vetorDePrimos[], int tam){
    int cont=0;

    for(int i=0; i< tam; i++){
        if(ehPrimo(vetor[i])){
            vetorDePrimos[cont] = vetor[i];
            cont++;
        }
    }
    return cont;
}