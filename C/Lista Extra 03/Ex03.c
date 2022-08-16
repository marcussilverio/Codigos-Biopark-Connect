#include <stdio.h>
#include <math.h>
/*
    Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das
    componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem
    10 elementos cada. Imprimir todos os conjuntos.
*/
int main(){
    int vetor[10], vetorAoQuadrado[10], i;
    
    //leitura do vetor
    for(i=0; i< 10; i++)
        scanf("%d", &vetor[i]);

    //calculo do quadrado de cada item
    for(i=0; i<10; i++)
        vetorAoQuadrado[i]= pow(vetor[i], 2);

    //imprimir todos os conjuntos
    printf("\nVetor:");
    for(i=0; i<10 ; i++){
        printf("%d ", vetor[i]);
    }
    printf("\nVetor ao quadrado:");
    for(i=0; i<10 ; i++){
        printf("%d ", vetorAoQuadrado[i]);
    }
    printf("\n");
    return 0;
}