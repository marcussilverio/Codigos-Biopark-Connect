#include <stdio.h>
#define TAM 20
/*  
    Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando elementos
    repetidos.
*/
void insereVetorNaoRepetidos(int num, int vetor[]);
void verificaRepetido(int vetor[]);
void imprimeNaoRepetidos(int vetor[], int tam);
int verificaExistenciaNoVetor(int num, int vetor[], int tam);
void inicializaVetorNulo(int vetor[], int tam);
int main(){
    int vetor[TAM];

    // leitura do vetor
    for(int i=0; i<TAM; i++)
        scanf("%d", &vetor[i]);
    
    verificaRepetido(vetor);

    return 0;
}
void verificaRepetido(int vetor[]){
    int i, vetorNaoRepetidos[TAM], indiceNaoRepetidos=0;
    inicializaVetorNulo(vetorNaoRepetidos, TAM);
    for(i=0; i< TAM; i++){ 
            if(!verificaExistenciaNoVetor(vetor[i], vetorNaoRepetidos, TAM)){
                insereVetorNaoRepetidos(vetor[i], &vetorNaoRepetidos[indiceNaoRepetidos]);
                indiceNaoRepetidos++;
            }   
    }
    imprimeNaoRepetidos(vetorNaoRepetidos, indiceNaoRepetidos);
}
int verificaExistenciaNoVetor(int num, int vetor[], int tam){
    // percorre o vetor resposta para verificar se o num ja existe nele
    for(int i=0; i< tam; i++){
        if(num == vetor[i])
            return 1;
    }
    return 0;
}
void insereVetorNaoRepetidos(int num, int vetor[]){
    //apenas atribui o valor ao vetor
    vetor[0] = num;
}
void imprimeNaoRepetidos(int vetor[], int tam){
    printf("Vetor resposta: ");
    for(int i=0; i< tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}
void inicializaVetorNulo(int vetor[], int tam){
    for(int i=0; i< tam; i++)
        vetor[i] = 0;
}