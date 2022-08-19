#include<stdio.h>
#define MAX 5
/*
    Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuario nao
    informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso
    abaixo:
    * Soma entre x e y: soma de cada elemento de x com o elemento da mesma posicao em y.
    * Produto entre x e y: multiplicacao de cada elemento de x com o elemento da mesma posicao em y.
    * Diferenca entre x e y: todos os elementos de x que n˜ao existam em y.
    * Intersecao entre x e y: apenas os elementos que aparecem nos dois vetores.
    * Uniao entre x e y: todos os elementos de x, e todos os elementos de y que nao estao em x.
*/
void leVetor(int vetor[], int tam);
int somaVetores(int vetor1[], int vetor2[], int vetorSoma[], int tam);
int produtoVetores(int vetor1[], int vetor2[], int vetorProduto[], int tam);
int diferencaVetores(int vetor1[], int vetor2[], int vetorDiferenca[], int tam);
short verificaDuplicidade(int num, int vetor[], int tam);
int uniao(int vetor1[], int vetor2[], int vetIntersec[], int tam);
int interseccao(int vetor1[], int vetor2[], int vetIntersec[], int tam);
void imprimeVetor(int vetor[], int tam);

int main(){
    int vetor1[MAX], vetor2[MAX], vetorUniao[MAX*2], vetorInterseccao[MAX], vetorSoma[MAX], vetorProduto[MAX], vetorDiferenca[MAX];
    int tamVetUniao,  tamVetInterseccao;

    //leitura dos vetores
    printf("Vetor 1:\n");
    leVetor(vetor1, MAX);
    printf("Vetor 2:\n");
    leVetor(vetor2, MAX);

    // calculos pedidos no exercicio
    somaVetores(vetor1,vetor2, vetorSoma, MAX);
    produtoVetores(vetor1,vetor2, vetorProduto, MAX);
    diferencaVetores(vetor1, vetor2, vetorDiferenca, MAX);
    tamVetInterseccao = interseccao(vetor1, vetor2, vetorInterseccao, MAX);
    tamVetUniao = uniao(vetor1, vetor2, vetorUniao, MAX);

    // apresentacao dos resultados
    printf("Vetores somados: ");
    imprimeVetor(vetorSoma, MAX);
    printf("Vetores multiplicados: ");
    imprimeVetor(vetorProduto, MAX);
    printf("Vetores subtraidos: ");
    imprimeVetor(vetorDiferenca, MAX);
    printf("Interseccao dos vetores: ");
    imprimeVetor(vetorInterseccao, tamVetInterseccao);
    printf("Uniao dos vetores: ");
    imprimeVetor(vetorUniao, tamVetUniao);
    return 0;
}

void leVetor(int vetor[], int tam){
    for(int i=0; i< tam; i++){
        scanf("%d", &vetor[i]);
    }
}
int somaVetores(int vetor1[], int vetor2[], int vetorSoma[], int tam){
    for(int i=0 ; i< tam; i++){
        vetorSoma[i]=vetor1[i]+vetor2[i];
    }    
}
int produtoVetores(int vetor1[], int vetor2[], int vetorProduto[], int tam){
    for(int i=0 ; i< tam; i++){
        vetorProduto[i]=vetor1[i]*vetor2[i];
    }
}
int diferencaVetores(int vetor1[], int vetor2[], int vetorDiferenca[], int tam){
    for(int i=0 ; i< tam; i++){
        vetorDiferenca[i]=vetor1[i]-vetor2[i];
    }
}
short verificaDuplicidade(int num, int vetor[], int tam){
    for(int i=0; i< tam; i++){
        if(vetor[i] == num)
            return 1;
    }
    return 0;
}
int uniao(int vetor1[], int vetor2[], int vetIntersec[], int tam){
    int i, j, cont=0;

    for(i=0; i< tam; i++){            
        if(!verificaDuplicidade(vetor1[i], vetIntersec, cont)){
            vetIntersec[cont] = vetor1[i];
            cont++;
        }
    }
    for(i=0; i< tam; i++){            
        if(!verificaDuplicidade(vetor2[i], vetIntersec, cont)){
            vetIntersec[cont] = vetor2[i];
            cont++;
        }
    }
    return cont;
}
int interseccao(int vetor1[], int vetor2[], int vetIntersec[], int tam){
    int i, j, cont=0;

    for(i=0; i< tam; i++){
        for(j=0; j< tam; j++){
            if(vetor1[i] == vetor2[j]){
                if(!verificaDuplicidade(vetor1[i], vetIntersec, cont)){
                    vetIntersec[cont] = vetor1[i];
                    cont++;
                }
            }
        }
    }
    return cont;
}
void imprimeVetor(int vetor[], int tam){
    for(int i=0; i<tam ; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}