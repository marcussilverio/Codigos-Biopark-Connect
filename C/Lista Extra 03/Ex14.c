#include <stdio.h>
/*
    Faca um programa que leia um vetor de 10 posicoes e verifique se existem valores iguais
    e os escreva na tela.
*/
void verificaRepetido(int vetor[]);
void insereVetorRepetidos(int num, int vetor[]);
int verificaExistenciaNoVetor(int num, int vetor[], int tam);
void imprimeRepetidos(int vetor[], int tam);
int main(){
    int vetor[10], i;

    //leitura do vetor
    for(i=0; i< 10; i++){
        scanf("%d", &vetor[i]);
    }

    // verifica valores iguais.
    verificaRepetido(vetor);
}
void verificaRepetido(int vetor[]){
    int i,j, vetorDeRepetidos[5], indiceVetorRepetidos=0;
    //percorre o vetor comparando cada valor com todos os demais
    for(i = 0; i<10; i++){
        for(j=i+1; j< 10; j++ ){
            // Se existir algum valor igual
            if(vetor[i] == vetor[j]){
                // se o valor igual ja foi registrado para impedir impressao duplicada
                if(!verificaExistenciaNoVetor(vetor[i], vetorDeRepetidos, 5)){
                    // se nao foi registrado, registra
                    insereVetorRepetidos(vetor[i], &vetorDeRepetidos[indiceVetorRepetidos]);
                    indiceVetorRepetidos++;
                }
            }
        }
    }
    // imprime o vetor com os valores repetidos
    imprimeRepetidos(vetorDeRepetidos, indiceVetorRepetidos);

}
void insereVetorRepetidos(int num, int vetor[]){
    //apenas atribui o valor ao vetor
    vetor[0] = num;
}
int verificaExistenciaNoVetor(int num, int vetor[], int tam){
    // percorre o vetor resposta para verificar se o num ja existe nele
    for(int i=0; i< tam; i++){
        if(num == vetor[i])
            return 1;
    }
    return 0;
}
void imprimeRepetidos(int vetor[], int tam){
    for(int i=0; i< tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}