#include <stdio.h>

int main(){

    int dias, meses, anos, qtDias;

    printf("Quantidade de dias sem acidente: ");
    scanf("%d", &qtDias);

    meses = (qtDias/30)%12;
    anos = qtDias/360;
    dias = qtDias - anos*360 - meses*30;

    printf("Tempo sem acidentes:\n%d Anos\n%d Meses\n%d Dias\n", anos,meses, dias);
    return 0;
}