 #include <stdio.h>

int main(){
    int dias , mes , qtDias;

   do{
        printf("Digite o dia: ");
        scanf("%d", &dias);

        printf("Digite o mes: ");
        scanf("%d", &mes);
    }while((dias < 0 || dias > 30 ) || (mes < 0 || mes > 12));

    qtDias = dias + mes*30;

    printf("Quantidade de dias desde o inicio do ano: %d", qtDias);
    return 0;
}

