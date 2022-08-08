#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int achaPalavra(char* texto, char* palavra){
    int indiceTexto=0, i, posicao=-1, tamanhoPalavra, tamanhoTexto, encontrouPalavra =0;

    tamanhoPalavra = strlen(palavra);
    tamanhoTexto = strlen(texto);
    
    while(indiceTexto < tamanhoTexto){
        if(texto[indiceTexto] == palavra[0]){           
            for(i =0 ; i< tamanhoPalavra -1 ; i++){
                if(texto[indiceTexto] != palavra[i] && encontrouPalavra == 0){
                    printf("[%d]%c != [%d]%c\n",indiceTexto, texto[indiceTexto],i, palavra[i]);
                    posicao = -1;
                }else{
                    printf("[%d]%c == [%d]%c\n",indiceTexto, texto[indiceTexto],i, palavra[i]);
                    encontrouPalavra =1;
                    posicao = indiceTexto;
                }
                indiceTexto++;
            }
        }
        indiceTexto++;
    }
    
    return posicao;
}
int main(){
    char texto[150], palavra[10];
    int i,j, tamanhoPalavra, tamanhoTexto, posicao;

    printf("Texto: ");
    fgets(texto, 150, stdin);
    printf("Palavra: ");
    fgets(palavra, 10, stdin);

    posicao = achaPalavra(texto, palavra);
    if(posicao == -1){
        printf("Nao encontrado\n");
    }else
        printf("Palavra encontrada na posicao %d\n", posicao);

    return 0;
}