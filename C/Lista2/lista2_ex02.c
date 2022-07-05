#include <stdio.h>

int main(){

    int a;

    scanf("%d", &a);

    if(a % 2 == 0){
        printf("par\n");
    }else{
        printf("impar\n");
    }
    return 0;
}