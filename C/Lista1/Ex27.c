#include <stdio.h>

int main(){
    int n1, n2;
    float res;

    printf("Digite os 2 numeros: ");
    scanf("%d %d", &n1, &n2);
    if(n2 != 0){
        res = n1/n2;
        printf("O valor da divisao eh: %.2f", res);
    }
    else
        printf("nao eh possivel dividir por 0\n");
    return 0;
}