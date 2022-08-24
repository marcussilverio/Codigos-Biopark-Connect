#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define True 1
#define False 0
#define MAX 5

struct Livros
{
    char nome[50];
    int ano;
    int valido; 
};

struct Livros addLivro(int indice){
    struct Livros livro;
    livro.valido = True;

    fflush(stdin);
    printf("Ano: ");
    scanf("%d", &livro.ano);

   // fflush(stdin);
    printf("Livro %d: ", indice+1);
    fgets(livro.nome, 50, stdin);
    livro.nome[strcspn(livro.nome, "\n")] = 0;
    return livro;
}
void removeLivro(int indice, struct Livros livro[]){
    livro[indice].valido = False;
    livro[indice].ano = -1;
    livro[indice].nome[0] = '\0';
}
void imprimeLivro(struct Livros livro){
    printf("\tnome: \"%s\"\n", livro.nome);
    printf("\tano: \"%d\"", livro.ano);
}
void imprimeOpcoes(){
    printf("1 - Para adicionar livros (MAX 5)\n");
    printf("2 - Para remover livros\n");
    printf("3 - Para listar livros\n");
    printf("4 - Para alterar livro cadastrado\n");
    printf("0 - Para sair\n");
}
int opcaoUsuario(){
    int op;
    imprimeOpcoes();
    scanf("%d", &op);
    return op;
}
int main(){

    struct Livros livros[MAX];
    int livrosAdicionados = 0, op, indice;
    for(int i=0; i<MAX; i++){
        livros[i].valido = False;
    }

    do{
        system("clear");
        op = opcaoUsuario();
        switch (op)
        {
        case 1:
            indice =0;
            while(livros[indice].valido !=0 ){
                indice++;
            }
            livros[indice]=addLivro(indice);
            livrosAdicionados++;
            printf("Item adicionado com sucesso!\n");
            system("read –n1");
            break;
        case 2:            
            system("clear");
            printf("Qual o indice do livro a ser removido (-1 para cancelar): ");
            scanf("%d", &indice);
            if(indice != -1 && livros[indice].valido == True){
                removeLivro(indice, livros);
                livrosAdicionados--;
                printf("Item removido com sucesso!\n");
                system("read –n1");
            }else if(livros[indice].valido != True){
                printf("Nenhum item para ser removido\n");
                system("read –n1");
            }
            break;
        case 3:
            system("clear");
            printf("{\n");
            for(int i=0; i< MAX; i++){
                if(livros[i].valido == True){
                    imprimeLivro(livros[i]);
                    printf(",\n");
                }
            }
            printf("}\n");
            system("read –n1");
            break;
        case 4:
            system("clear");
            printf("Qual o indice do livro a ser alterado (-1 para cancelar): ");
            scanf("%d", &indice);
            if(indice != -1){
                livros[indice] = addLivro(indice);
                printf("Item alterado com sucesso!\n");
                system("read –n1");
            }
            break;        
        default:
            break;
        }
    }while(livrosAdicionados < MAX && op != 0);
    return 0;
}