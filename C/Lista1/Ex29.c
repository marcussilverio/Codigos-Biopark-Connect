#include <stdio.h>

int main(){
    float preco;

    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    printf("O valor do produto com 10%% de desconto eh: %.2f", preco*0.9);
    return 0;
}