#include <stdio.h>

int main(){

    int num;

    scanf("%d", &num);
    
    if(num % 2 == 0){
        if (num > 10){
            printf("Numero par e maior que 10\n");
        }
        else if (num == 10){
            printf("Numero par e igual a 10\n");
        }else{
            printf("Numero par e menor que 10\n");
        }
    }else{
         if (num < 50){
            printf("Numero impar e maior que 50\n");
        }
        else if (num == 50){
            printf("Numero impar e igual a 50\n");
        }else{
            printf("Numero impar e menor que 50\n");
        }
    }
    return 0;
}