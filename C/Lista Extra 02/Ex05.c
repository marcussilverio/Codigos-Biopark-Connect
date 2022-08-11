#include <stdio.h>
/*
    Dado um dígito, escrever o mesmo em código Morse.
    1 . _ _ _ _  2 . . _ _ _ 
    3 . . . _ _  4 . . . . _ 
    5 . . . . .  6 _ . . . . 
    7 _ _ . . .  8 _ _ _ . . 
    9 _ _ _ _ .  0 _ _ _ _ _ 
*/
void escreve_morse(int num){
    char dic[10][10] = {"_ _ _ _ _\0", ". _ _ _ _\0", ". . _ _ _\0", 
                    ". . . _ _\0", ". . . . _\0", ". . . . .\0",
                    "_ . . . .\0", "_ _ . . .\0", "_ _ _ . .\0",
                    "_ _ _ _ .\0"};
    printf("%s", dic[num]);
}
int main(){
    int n = 0;
    do{
        printf("Insira um numero: ");
        scanf("%d", &n);

        if( n< 0 || n > 9){
            printf("Insira um valor entre 0 e 9");
        }
    }while(n < 0 || n > 9);
    escreve_morse(n);
    return 0;
}