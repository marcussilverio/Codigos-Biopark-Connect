#include <stdio.h>
/*
    Recebe duas datas e retorna a mais recente.
*/
int main(){

    int dia1, dia2, mes1, mes2, ano1, ano2;

    printf("Primeira data no formato DD/MM/AAAA\n");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);
    printf("Segunda data no formato DD/MM/AAAA\n");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    if( ano1 > ano2){
        printf("A data mais recente eh: %d/%d/%d", dia1, mes1, ano1);
    }else if( ano1 < ano2){
        printf("A data mais recente eh: %d/%d/%d", dia2, mes2, ano2);
    }else{
        if( mes1 > mes2){
            printf("A data mais recente eh: %d/%d/%d", dia1, mes1, ano1);
        }else if(mes1 < mes2){
            printf("A data mais recente eh: %d/%d/%d", dia2, mes2, ano2);
        }else{
            if(dia1 > dia2){
                printf("A data mais recente eh: %d/%d/%d", dia1, mes1, ano1);
            }else if(dia1 < dia2){
                printf("A data mais recente eh: %d/%d/%d", dia2, mes2, ano2);
            }else{
                printf("As datas informadas sao iguais.\n");
            }
        }
    }

    return 0;
}