#include <stdio.h>
#include <stdlib.h>

void lerVetor(int*, int);
void zerarVetor(int*, int);
void imprimeVetor(int*, int);
int maiorElementoVetor(int*, int);
int menorELementoVetor(int*, int);
double mediaElementosVetor(int*, int);

int main(){

    int vet[10];

    lerVetor(vet, 10);
    imprimeVetor(vet,10);
    printf("Maior elemento: %d\n", maiorElementoVetor(vet,10));
    printf("Menor elemento: %d\n", menorELementoVetor(vet,10));
    printf("Media dos elementos: %.2lf\n", mediaElementosVetor(vet,10));
    zerarVetor(vet, 10);
    imprimeVetor(vet,10);   
    return 0;
}
void lerVetor(int *vet, int tam){
    int i;
    printf("Leitura dos numeros do vetor.\n");
    for(i=0; i<tam ; i++){
        printf("Numero %d: ",i+1 );
        scanf("%d", &vet[i]);
        fflush(stdin);
    }
}
void zerarVetor(int *vet, int tam){
    int i;
    for(i=0; i<tam ; i++){
        vet[i] = 0;
    }
}
void imprimeVetor(int *vet, int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}
int maiorElementoVetor(int *vet, int tam){
    int i, maior;
    maior = vet[0];
    for(i=1 ; i< tam; i++){
        if(vet[i] > maior)
            maior = vet[i];
    }
    return maior;
}
int menorELementoVetor(int *vet, int tam){
    int i, menor;
    menor = vet[0];
    for(i=1 ; i< tam; i++){
        if(vet[i] < menor)
            menor = vet[i];
    }
    return menor;
}
double mediaElementosVetor(int *vet, int tam){
    int i, soma =0;
    double media;
    for(i=0; i< tam; i++){
        soma+= vet[i];
    }
    media = soma/tam;
    return media;
}
