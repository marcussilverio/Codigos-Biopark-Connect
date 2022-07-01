#include<stdio.h>

int main(){

    float qtNovelos, qtBlusas, laPorBlusa;

    printf("Total de novelos gasto: ");
    scanf("%f", &qtNovelos);

    printf("Total de blusas confeccionadas: ");
    scanf("%f", &qtBlusas);

    laPorBlusa = qtNovelos/qtBlusas;

    printf("Quantidade de novelos por blusa produzida: %.2f", laPorBlusa  );
    return 0;
}