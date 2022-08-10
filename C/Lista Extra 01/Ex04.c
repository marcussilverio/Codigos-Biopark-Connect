#include <stdio.h>
/*
    Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o maior número
    primo que é menor ou igual a n.
*/
short ehPrimo(int num){
    int i, cont =0;
    for(i=num ; i > 0 ; i--){
        if(num % i == 0)
            cont++;
    }
    if(cont > 2)
        return 0;
    return 1;
}
int maiorPrimoIgualOuMenor(int num){
    int i=0, primo;
    while(i < num){
        if(ehPrimo(i)){
            primo = i;
        }
        i++;
    }
    if(primo == num)
        return num;
    else{
        while(ehPrimo(i) == 0){
            i++;
        }
        return i;
    }
}

int main(){

    int num;
    scanf("%d", &num);
    printf("%d \n",maiorPrimoIgualOuMenor(num));

    return 0;
}