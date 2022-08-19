#include <stdio.h>
/*
    Faca um programa que leia dois numeros a e b (positivos menores que 10000) e:    
    * Crie um vetor onde cada posicao e um algarismo do numero. A primeira posicao e o algarismo menos significativo;
    * Crie um vetor que seja a soma de a e b, mas faca-o usando apenas os vetores construıdos anteriormente.
    
    Dica: some as posicoes correspondentes. Se a soma ultrapassar 10, subtraia 10 do
    resultado e some 1 a proxima posicao.
*/
void separaDigitos(int num, int vetor[],int  tam);
int contaDigitos(int num);
void imprimeVetor(int vetor[], int tam);

int main(){

    int somaAlgarismos[6], tamanhoVetAlgarismos, numA, numB;

    printf("Primeiro numero: ");
    scanf("%d", &numA);
    printf("Segundo numero: ");
    scanf("%d", &numB);

    tamanhoVetAlgarismos = contaDigitos(numA+numB);
    separaDigitos(numA+numB, somaAlgarismos, tamanhoVetAlgarismos);
    
    imprimeVetor(somaAlgarismos, tamanhoVetAlgarismos);

    return 0;
}

void separaDigitos(int num, int vetor[], int tam){
    int i = tam-1;
    while(num>0)
    {
        vetor[i] = num%10;
        i--;
        num = num/10;
    }
}
int contaDigitos(int num){
    int cont=0;
    do{
        num /=10;
        cont++;
    }while(num > 0);
    return cont;
}
void imprimeVetor(int vetor[], int tam){
    for(int i=0; i< tam; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}