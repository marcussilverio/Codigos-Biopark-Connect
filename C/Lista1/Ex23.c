#include <stdio.h>

int main(){

    float alturaPredio, alturaPessoa, sombraPredio, sombraPessoa;

    printf("Qual a sua altura?\n");
    scanf("%f", &alturaPessoa);
    printf("Quanto mede a sua sombra?\n");
    scanf("%f", &sombraPessoa);
    printf("Qual a medida da sombra do predio?\n");
    scanf("%f", &sombraPredio);

    alturaPredio = (alturaPessoa/sombraPessoa)*sombraPredio;

    printf("A altura do predio eh de %.2f metros\n", alturaPredio);
    return 0;
}