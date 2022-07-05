#include <stdio.h>

int main(){
 
    int nivel, hAula;
    float salario;

    printf("Nivel do professor: ");
    scanf("%d", &nivel);
    printf("Quantidade de Hora/aula semanal: ");
    scanf("%d", &hAula);

    if(nivel == 1){
        salario = 12 * hAula * 4.5; 
    }else if(nivel == 2){
        salario = 17 * hAula * 4.5; 
    }else if(nivel == 3){
        salario = 25 * hAula * 4.5; 
    }else {
        printf("Nivel informado invalido.\n");
    }
    printf("Salario: R$%.2f", salario);
    return 0;
}