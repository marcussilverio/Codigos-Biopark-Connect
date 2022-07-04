#include <stdio.h>

int main(){

    int a, b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a >= b && a >= c){
        printf("maior: %d\n",a );
    }else if(b >= a && b >= a){
        printf("maior: %d\n",b );
    }else if(c >= a && c >= b){
        printf("maior: %d\n",c );
    }
}