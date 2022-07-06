#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int codigo;
    float salario;

    printf("Codigo: ");
    scanf("%d", &codigo);

    printf("Salario: ");
    scanf("%f", &salario);
    system("cls");
    if(codigo == 101){
        printf("Cargo: Gerente\n");
        printf("Salario: R$%.2f\n", salario);
        printf("Percentual de ajuste: 10%%\n");
        printf("Acrescimo: %.2f\n", salario*0.1);
        printf("Salario reajustado: R$%.2f", salario*1.1);
    }else if(codigo == 102){
        printf("Cargo: Engenheiro\n");
        printf("Salario: R$%.2f\n", salario);
        printf("Percentual de ajuste: 20%%\n");
        printf("Acrescimo: %.2f\n", salario*0.2);
        printf("Salario reajustado: R$%.2f", salario*1.2);
    }else if(codigo == 103){
        printf("Cargo: Tecnico\n");
        printf("Salario: R$%.2f\n", salario);
        printf("Percentual de ajuste: 30%%\n");
        printf("Acrescimo: %.2f\n", salario*0.3);
        printf("Salario reajustado: R$%.2f", salario*1.3);
    }else{
        printf("Cargo: Nao cadastrado\n");
        printf("Salario: R$%.2f\n", salario);
        printf("Percentual de ajuste: 40%%\n");
        printf("Acrescimo: %.2f\n", salario*0.4);
        printf("Salario reajustado: R$%.2f", salario*1.4);
    }
    return 0;
}