#include<stdio.h>
#include<stdlib.h>

int main(){
    int num[3];
    int ch,  i = 0, j;    
    while((ch = getchar()) != '\n'){
        num[i++] = ch - 48;
    }
    for(j = 0; j< i; j++)
        printf("digito - %d: %d\n", j+1, num[j]);
    return 0;
}