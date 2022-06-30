 #include <stdio.h>
 #define P 10
 #define M 12
 #define G 15

 int main(){
    
    int qtP, qtM, qtG;

    printf("Quantidade de camisetas P: ");
    scanf("%d", &qtP);

    printf("Quantidade de camisetas M: ");
    scanf("%d", &qtM);

    printf("Quantidade de camisetas G: ");
    scanf("%d", &qtG);

    printf("Valor total arrecadado: %d.00", qtP*P + qtM * M + qtG * G);
    return 0;
 }