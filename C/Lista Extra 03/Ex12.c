#include <stdio.h>
/*
    Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
    juntamente com o maior, o menor e a media dos valores.
*/
int maior(int vetor[]);
int menor(int vetor[]);
void mostraVetor(int vetor[]);
int main(){
    int vetor[5],i;

    // leitura do vetor
    for(i =0; i< 5; i++){
        scanf("%d", &vetor[i]);
    }
    mostraVetor(vetor);
    printf("maior: %d, menor: %d", maior(vetor), menor(vetor));
    return 0;
}
// procura o maior valor no vetor
int maior(int vetor[]){
    int m = vetor[0];
    for(int i=0; i<5; i++)
        if(m < vetor[i])
            m = vetor[i];
    
    return m;
}
// procura o menor valor no vetor
int menor(int vetor[]){
    int m = vetor[0];
    for(int i=0; i<5; i++)
        if(m > vetor[i])
            m = vetor[i];
    
    return m;
}
// imprime todo o vetor
void mostraVetor(int vetor[]){
    for(int i=0; i<5; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}
