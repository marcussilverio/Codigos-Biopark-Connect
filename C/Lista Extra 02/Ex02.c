#include <stdio.h>
/*
    Dado os numeros n e m (digitados pelo usuário) , escreva a tabuada de n de 
    1 até m .
    Ex.: n = 2 , m = 20 faz a tabuada de 2 de 1 a 20.
    Restrinja a entrada de dados de maneira que caso seja digitado um valor menor
    que 2 e maior que 9 seja exibida uma mensagem de aviso e não calcule a
    tabuada.
*/
void tabuada(int n, int m){
    int i;

    for (i =0 ; i < m ; i++)
        printf("%d * %d = %d\n", n, i+1, n*(i+1));
}
void recebe_entrada(){
    int n, m;
    do{
        printf("Digite o valor n: ");
        scanf("%d", &n);
        printf("Digite o valor m: ");
        scanf("%d", &m);
        if(n < 2 || n > 9)
            printf("Valor de n tem que estar entre 2 e 9.\n");
    }while(n < 2 || n > 9);
    tabuada(n,m);
}
int main(){
    recebe_entrada();
    return 0;
}