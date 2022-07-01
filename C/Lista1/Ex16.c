#include <stdio.h>
#define QUEIJO 0.05
#define PRESUNTO 0.05
#define HAMBURGUER 0.1
int main(){

    int qtSanduiche;
    float qtQueijo, qtPresunto, qtHamburguer;

    printf("Quantidade de Sanduiches: ");
    scanf("%d", &qtSanduiche);

    qtPresunto = qtSanduiche * PRESUNTO;
    qtQueijo = qtSanduiche * 2 * QUEIJO;
    qtHamburguer = qtSanduiche * HAMBURGUER;

    printf("Presunto: %.2fKg\nQueijo: %.2fKg\nHamburguer: %.2fKg\n", qtPresunto, qtQueijo, qtHamburguer); 

    return 0;
}