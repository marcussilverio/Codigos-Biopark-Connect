 #include <stdio.h>

 int main(){

    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b){
        printf("maior: %d", a);
    }else if( a < b){
        printf("maior: %d", b);
    }else{
        printf("sao iguais");
    }

    return 0;
 }