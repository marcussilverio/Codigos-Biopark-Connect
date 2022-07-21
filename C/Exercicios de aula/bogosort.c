#include <stdio.h>
#include <stdlib.h>
#define MAX 6

int taOrdenado(int *vet, int n){
    for(int i=0; i< n; i++){
        if(vet[i] >= vet[i+1])
            return 0;
    }
    return 1;
}
void embaralha(int *vet, int n){
    int i, t, r;
    for(i=0; i<n ;i++){
        t = vet[i];
        r = rand() % n;
        vet[i]= vet[r];
        vet[r] = t;
    }
}
void imprime(int* vet, int n){
    int i;
    for(i=0; i< n; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}
void bogosort(int *vet, int n){
    while(!taOrdenado(vet, n)){
       // imprime(vet, n);
        embaralha(vet, n);
    }
}

int main(){
    int *numeros;
    int i;

    numeros = (int*) malloc(MAX * sizeof(int));
    //atribui valores aleatorios ao vetor
    for( i= 0; i< MAX; i++){
        numeros[i] = rand() % 100;
    }
    
    printf("Vetor gearado: ");
    imprime(numeros, MAX);

    printf("Ordenando...\n");
    bogosort(numeros, MAX);

    printf("Ordenado!\n");
    imprime(numeros, MAX);
    system("pause");
    return 0;
}