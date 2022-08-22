#include <stdio.h>
#include <stdlib.h>
/*
    Dado um número inteiro, escrever o mesmo em código Morse. O código
    Morse deve ser fornecido na mesma ordem dos caracteres digitados. Utilize o
    programa que calcula o logaritmo de 10 para auxiliálo
    nesta tarefa
*/
void escreve_morse(int num);
int logaritimo_mais_proximo(int num);
void separa_digitos(int tamanho, int num, int* vetor);
int main(){
    int vetorNumeros[30];
    int numero, qtCasas, i;

    printf("Insira o numero: ");
    scanf("%d", &numero);
    qtCasas = logaritimo_mais_proximo(numero);
    separa_digitos(qtCasas, numero, vetorNumeros);
    for(i =0; i < qtCasas ; i++){
        escreve_morse(vetorNumeros[i]);
        printf("  ");
    }
    return 0;
}
void separa_digitos(int tamanho,int num, int *vetor){
    int i = tamanho-1;
    while(num>0)
    {
        vetor[i] = num%10;
        i--;
        num = num/10;
    }
}
void escreve_morse(int num){
    char dic[10][10] = {"_ _ _ _ _\0", ". _ _ _ _\0", ". . _ _ _\0", 
                    ". . . _ _\0", ". . . . _\0", ". . . . .\0",
                    "_ . . . .\0", "_ _ . . .\0", "_ _ _ . .\0",
                    "_ _ _ _ .\0"};
    printf("%s", dic[num]);
}
int logaritimo_mais_proximo(int num){
    int cont = 0;
    
    do{
        num = num / 10;
        cont++;
    }while(num > 0);
    return cont;
}