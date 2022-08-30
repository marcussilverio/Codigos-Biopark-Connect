#include "library.h"
void limpaConsole(){
    printf("\e[1;1H\e[2J");
}
void pausaConsole(){
    printf("Aperte qualquer tecla para continuar...\n");
    getchar();
    getchar();
}
void menu(Poltrona vet[LIN][COL]){
    int op;
    do{
        limpaConsole();
        mostraMenu();
        op = recebeOpcao();
        limpaConsole();
        switch(op){
            case 1:                
                imprimePoltronas(vet);                
                break;
            case 2:
                imprimePoltronas(vet);
                fazerCompra(vet);
                break;
            case 3:
                imprimePoltronas(vet);
                fazerReserva(vet);
                break;
            case 4:
                imprimePoltronas(vet);
                cancelarReserva(vet);
                break;
            case 0:
                return;
                break;
            default:
                printf("Opcao invalida, digite novamente");
                break;
        }
        pausaConsole();
        
    }while( op != 0);
}

void mostraMenu(){
    limpaConsole();
    printf("========= MENU CINEMA =========\n");
    printf("1 - LISTAR POLTRONAS\n");
    printf("2 - FAZER COMPRA\n");
    printf("3 - FAZER RESERVA\n");
    printf("4 - CANCELAR RESERVA\n");
    printf("0 - SAIR\n");
    printf("===============================\n");
}
int recebeOpcao(){
    int op;
    mostraMenu();
    printf("Digite sua opcao: ");
    scanf("%d", &op);
    fflush(stdin);
    return op;
}
void inicializaVetorPoltronas(Poltrona vet[LIN][COL]){
    int cont =11;
    for(int i =0; i< LIN; i++){
        for(int j = 0; j< COL; j++){
            if ( cont %10 == 0){
                cont++;
            }
            vet[i][j].numero = cont;
            cont++;
            vet[i][j].vendido = False;
            vet[i][j].reservado = False;
            
        }
    }
}
void imprimeVetor(Poltrona vet[LIN][COL]){
    int i, j;
    for(i =0; i< LIN; i++){
        for(j = 0; j< COL; j++){
            printf("%d ",vet[i][j].numero);
        }
        printf("\n");
    }
}
void imprimePoltronas(Poltrona vet[LIN][COL]){
    for(int i =0; i < LIN; i++){
        printf("+ -- + -- + -- + -- + -- + -- + -- + -- + -- +\n");
        for(int j = 0; j< COL; j++){
            printf("|");
            if(vet[i][j].reservado == True){
                foreground(YELLOW);
            }else if (vet[i][j].vendido == True){
                foreground(RED);
            }else{
                foreground(GREEN);
            }   
            printf("%3d ", vet[i][j].numero);
            style(RESETALL);
        }
        printf("|\n");
    }
    printf("+ -- + -- + -- + -- + -- + -- + -- + -- + -- +\n");
    printf("LEGENDA:\n");
    foreground(GREEN);
    printf("Disponivel ");
    foreground(YELLOW);
    printf("Reservado ");
    foreground(RED);
    printf("Vendido\n\n");
    style(RESETALL);
}
void fazerCompra(Poltrona vet[LIN][COL] ){
    int cadeira;
    printf("Digite o numero da poltrona escolhida.\nCaso queira cancelar digite 0 :");
    scanf("%d", &cadeira);
    if(cadeira == 0){
        return;
    }
    for(int i =0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            if(vet[i][j].numero == cadeira){
                if(vet[i][j].vendido == True ||vet[i][j].reservado == True){
                    printf("Poltrona inisponivel.\n");
                    return;
                }else{
                    vet[i][j].vendido = True;
                    printf("Compra realizada com sucesso.\n");
                }
            }
        }
    }
}
void fazerReserva(Poltrona vet[LIN][COL] ){
    int cadeira;
    printf("Digite o numero da poltrona escolhida.\nCaso queira cancelar digite 0 :");
    scanf("%d", &cadeira);
    if(cadeira == 0){
        return;
    }
    for(int i =0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            if(vet[i][j].numero == cadeira){
                if(vet[i][j].vendido == True ||vet[i][j].reservado == True){
                    printf("Poltrona insponivel.\n");
                    return;
                }else{
                    vet[i][j].reservado = True;
                    printf("Reserva realizada com sucesso.\n");
                }
            }
        }
    }
}
void cancelarReserva(Poltrona vet[LIN][COL] ){
    int cadeira;
    printf("Digite o numero da poltrona que deseja cancelar a reserva.\nCaso queira cancelar digite 0 :");
    scanf("%d", &cadeira);
    if(cadeira == 0){
        return;
    }
    for(int i =0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            if(vet[i][j].numero == cadeira){
                if(vet[i][j].vendido == True ||vet[i][j].reservado == False){
                    printf("Poltrona indisponivel para cancelamento.\n");
                    return;
                }else{
                    vet[i][j].reservado = False;
                    printf("Cancelamento realizado com sucesso.\n");
                }
            }
        }
    }
}