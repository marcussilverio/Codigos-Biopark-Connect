#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if(a > 0){
        printf("%d", a*2);
    }else if(a < 0){
        printf("%d", a*3);
    }else{
        printf("eh igual a 0");
    }
    return 0;
}