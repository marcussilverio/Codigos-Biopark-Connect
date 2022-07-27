#include <stdio.h>
#include <stdlib.h>
#define KM_TOTAL 4000
/*
    Um viajante decidiu se aventurar e percorrer toda a BR 101 de carro a partir do quilômetro 0 até ultrapassar o quilômetro 4000, 
    parando em várias cidades durante o
    a. percurso. Crie um algoritmo que, em cada cidade que o viajante parar, leia a
    b. informação da quilometragem percorrida e adicione ao valor da quilometragem total.
    c. Encerre o algoritmo quando o valor da quilometragem total percorrida for igual ou
    d. ultrapassar os 4000 km.
*/
int main(){

    float km, total=0;
    int qtParadas=0;

    do{
        system("cls");
        printf("Kilometragem da parada: ");
        scanf("%f", &km);
        total += km;
        qtParadas++;

    }while(total < KM_TOTAL);
    printf("Foram feitas %d paradas.\n", qtParadas);

    return 0;
}