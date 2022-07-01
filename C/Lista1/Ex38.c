#include <stdio.h>
#include <stdlib.h>
int anos(int anoAtual, int anoNasc){
    return (anoAtual - anoNasc);
}
int meses(int anoAtual, int anoNasc){
    return (anoAtual - anoNasc)*12;
}
int dias(int anoAtual, int anoNasc){
    return (anoAtual - anoNasc)*365;
}
int semanas(int anoAtual, int anoNasc){
    return (anoAtual - anoNasc)*52;
}
void anoNascimento(int *anoNasc){
    printf("Insira o ano de nascimento: ");
    scanf("%d", anoNasc);

}
void anoCorrente(int *anoAtual){
    printf("Insira o ano corrente: ");
    scanf("%d", anoAtual);

}
void entradas(int * anoAtual, int * anoNasc){
    int op;
    if(*anoAtual == 0 && *anoNasc == 0){       
            system("cls");
            printf("Insira o ano corrente: ");
            scanf("%d", anoAtual);
            printf("Insira o ano de nascimento: ");
            scanf("%d", anoNasc);            
    }else{
        do{
            system("cls");
            printf("Ano corrente: %d - Ano Nascimento %d\n", *anoAtual, *anoNasc);
            printf("1 - Para alterar o ano corrente\n2 - Para alterar o ano de nascimento\n3 - Para alterar ambos\n4 - Para nao alterar nenhum\n");
            scanf("%d", &op);
            switch(op){
                case 1 :anoCorrente(anoAtual); break;
                case 2 :anoNascimento(anoNasc);break;
                case 3 :anoCorrente(anoAtual);
                        anoNascimento(anoNasc);break;
                case 4: break;
                default: printf("Opcao invalida.\n");
            }
        }while(op > 4 || op <= 0);
    }
    if (*anoAtual < *anoNasc){
        printf("O ano corrente nao pode ser anterior ao ano de nascimento.\n");
        system("pause");
        entradas(anoAtual, anoNasc);
    }
}
int main(){

    int op, anoAtual = 0 , anoNasc = 0;
    
    do{
        entradas(&anoAtual, &anoNasc);
        system("cls");
        printf("1 - para idade em anos\n");
        printf("2 - para idade em meses\n");
        printf("3 - para idade em semanas\n");
        printf("4 - para idade em dias\n");
        printf("0 - para sair\n");
        scanf("%d", &op);
        if(op > 0 && op < 5){
            switch (op){
                case 1: printf("Idade em anos %d\n", anos(anoAtual, anoNasc));break;
                case 2: printf("Idade em meses %d\n", meses(anoAtual, anoNasc));break;
                case 3: printf("Idade em semanas %d\n", semanas(anoAtual, anoNasc));break;
                case 4: printf("Idade em dias %d\n", dias(anoAtual, anoNasc));break;
                case 0: break;
                default: printf("Opcao invalida!\n");           
            }
        }
        system("pause");
    }while(op != 0);
    return 0;
}