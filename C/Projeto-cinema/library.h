#ifndef LIBRARY_H
#define LIBRARY_H
#include <stdio.h>
#include <stdlib.h>
#include "colors.h"
#define LIN 9
#define COL 9
#define True 1
#define False 0

typedef struct{
    int numero;
    short reservado;
    short vendido;
}Poltrona;


void limpaConsole();
void pausaConsole();
void menu(Poltrona vet[LIN][COL]);
void mostraMenu();
int recebeOpcao();
void inicializaVetorPoltronas(Poltrona vet[LIN][COL]);
void imprimeVetor(Poltrona vet[LIN][COL]);
void imprimePoltronas(Poltrona vet[LIN][COL]);
void fazerCompra(Poltrona vet[LIN][COL]);
void fazerReserva(Poltrona vet[LIN][COL]);
void cancelarReserva(Poltrona vet[LIN][COL]);
#endif // !LIBRARY_H

