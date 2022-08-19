#include <stdio.h>
#define MAX 10
/*
    Faca um programa para ler 10 numeros DIFERENTES a serem armazenados em um
    vetor. Os dados deverao ser armazenados no vetor na ordem que forem sendo lidos,
    sendo que caso o usuario digite um numero que ja foi digitado anteriormente, o programa
    devera pedir para ele digitar outro numero. Note que cada valor digitado pelo usuario
    deve ser pesquisado no vetor, verificando se ele existe entre os numeros que ja foram
    fornecidos. Exibir na tela o vetor final que foi digitado.
*/
void leVetor(int vetor[], int tam);
int verificaDuplicidade(int num, int vetor[], int tam);
void imprimeVetor(int vetor[], int tam);

int main(){
    int vetor[MAX];

    leVetor(vetor, MAX);
    printf("Vetor resposta; ");
    imprimeVetor(vetor, MAX);
    return 0;
}

void leVetor(int vetor[], int tam){
    int num, dup;
    for(int i=0; i< tam; i++){
        do{
            printf("Numero %d:\n", i+1);
            scanf("%d", &num);
            dup =verificaDuplicidade(num, vetor, i);
            if(dup){
                printf("Valor duplicado, digite novamente!\n");
            }
        }while(dup);
        vetor[i] = num;
    }
}
int verificaDuplicidade(int num, int vetor[], int tam){
    for(int i=0 ; i< tam; i++){
        if(num == vetor[i])
            return 1;
    }
    return 0;
}
void imprimeVetor(int vetor[], int tam){
    for(int i=0; i< tam; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}