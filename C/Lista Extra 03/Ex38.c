#include <stdio.h>
#define MAX 10
/*
    Peca ao usuario para digitar dez valores numericos e ordene por ordem crescente esses
    valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
    final na tela os valores em ordem.
*/
void insereVetor(int num, int vetor[], int tam);
void leVetor(int vetor[], int tam);
void imprimeVetor(int vetor[], int tam);

int main(){
    int vetor[MAX];

    leVetor(vetor, MAX);

    printf("Vetor resultante: ");
    imprimeVetor(vetor, MAX);
    return 0;
}
void insereVetor(int num, int vetor[], int tam)
{   
    int i=0;
    if(tam == 1){
        vetor[0] = num;
        return;
    }else{
        while(num > vetor[i] && i < tam){
            i++;
        }
        if( i == tam){
            vetor[i] = num;
        }else{
            for(int j= tam+1; j> i; j--){
                vetor[j] = vetor[j-1];
            }
            vetor[i] = num;
            return;
        }
    }
    
}
void leVetor(int vetor[], int tam){
    int aux;
    for(int i=0; i< tam; i++ ){
        scanf("%d", &aux);
        insereVetor(aux,vetor,i+1);
        printf("Vetor pacial: ");
        imprimeVetor(vetor, i+1);
    }
}
void imprimeVetor(int vetor[], int tam){
    for(int i =0; i< tam; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}