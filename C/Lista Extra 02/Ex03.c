#include <stdio.h>
#define MAX 200
/*
    Dados números n e m, escreva a todos os números entre 1 a 200 que sejam
    divisíveis por n mas não por m.
*/
void divisiveis_so_por_n(int n, int m);
void recebe_entrada();
int main(){
    recebe_entrada();
    return 0;    
}
void divisiveis_so_por_n(int n, int m){
    int i;
    for(i = 1; i <= MAX; i++){
        if(i % n == 0 && i % m == 0){
            printf("%d eh divisivel por ambos\n", i);
        }
    }
}
void recebe_entrada(){
    int n, m;
    printf("Insira o valor de m: ");
    scanf("%d", &m);
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    divisiveis_so_por_n(n,m);
}