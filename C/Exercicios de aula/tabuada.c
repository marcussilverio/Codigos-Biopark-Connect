#include <stdio.h>

void tabuada(int num){
    int i;
    for(i =0; i< 10; i++)
        printf("%d x %d = %d\n", num, i+1, (i+1)*num );
}

int main(){
    int num;
    printf("Digite o numero: ");
    scanf("%d", &num);
    tabuada(num);
    return 0;
}