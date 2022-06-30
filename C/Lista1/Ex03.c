 #include<stdio.h>
 #define pao 0.12
 #define broa 1.5

 int main(){
    int qPao, qBroa;
    float poup, arrecadado;

    printf("Quantidade de paes: ");
    scanf("%d", &qPao);
    printf("Quantidade de broas: ");
    scanf("%d", &qBroa);
    arrecadado =  qPao*pao + qBroa*broa;
    poup = arrecadado * 0.10;
    printf("Total arrecadado: %.2f\n",arrecadado);
    printf("Guardar na poupanca: %.2f\n", poup);


    return 0;
 }