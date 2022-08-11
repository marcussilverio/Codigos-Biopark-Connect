#include <stdio.h>
#include <stdlib.h>
/*
    O restaurante da questão 17 realiza reservas de mesas através de ligações telefônicas e 
    possui 50 mesas disponíveis para reserva. Dessas mesas, 25 são na área de fumantes e 25 na área de não fumantes. 
    Para cada ligação recebida, o restaurante deve verificar se a reserva é para a mesa na área de fumantes ou 
    de não fumantes e contabilizar a quantidade de mesas restantes disponíveis em cada área. 
    Construa um algoritmo que realize a reserva das mesas e encerre a execução quando não houver mais mesas 
    disponíveis (nem na área de fumantes, nem na área de não fumantes).
*/
int main(){

    int mesasAreaFumantes = 25, mesasAreasNaoFumantes = 25, op;

    do{
        system("cls");
        printf("1 - Para reservar mesa area comum.\n2 - Para reservar mesa area fumantes.\n");
        scanf("%d", &op);
        if(op == 1)
            mesasAreasNaoFumantes--;
        else if (op == 2)
            mesasAreaFumantes--;
        else 
            printf("Opcao invalida.\n");       

    }while(mesasAreaFumantes != 0  && mesasAreasNaoFumantes != 0);

    return 0;
}