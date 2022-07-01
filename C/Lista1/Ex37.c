#include <stdio.h>
#include<stdlib.h>
int main(){
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    system("cls");
    printf("TABUADA DO NUMERO %d\n", num);
    for (i=0; i<10; i++){

        printf("%d x %d = %d\n", num, i+1, num*(i+1));
    }

    return 0;
}