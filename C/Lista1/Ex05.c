#include <stdio.h>

int main(){

    float preco, pagamento, combustivel;

    printf("Preco do combustivel: ");
    scanf("%f", &preco);

    printf("Valor a pagar: ");
    scanf("%f", &pagamento);

    combustivel = pagamento/preco;

    printf("Quantidade de combustivel: %.2fL", combustivel);
}