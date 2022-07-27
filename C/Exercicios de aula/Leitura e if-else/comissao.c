#include <stdio.h>

int main(){
    float valorTransacao, comissao;

    scanf("%f", &valorTransacao);

    if(valorTransacao >= 0 && valorTransacao <= 2500){
        comissao = 39 + (valorTransacao * 0.017);
    }else if (valorTransacao > 2500 && valorTransacao <= 6250){
        comissao = 56 + (valorTransacao * 0.0066);
    }else if (valorTransacao > 6250 && valorTransacao <= 20000){
        comissao = 76 + (valorTransacao * 0.0034);
    }else if(valorTransacao > 20000 && valorTransacao <= 50000){
        comissao = 100 + (valorTransacao * 0.0022);
    }else if(valorTransacao > 50000 && valorTransacao <= 500000){
        comissao = 155 + (valorTransacao * 0,0011);
    }else if(valorTransacao > 500000){
        comissao = 255 + (valorTransacao * 0.0009);
    }else {
        printf("Valor de transacao invalido\n");
        return 0;
    }
    printf("R$%.2f de transacao resulta em R$%.2f de comissao",valorTransacao, comissao);
    return 0;
}