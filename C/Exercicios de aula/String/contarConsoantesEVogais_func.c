#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int vogais(char * str){
    int vog = 0, i;
    char caractere;
    for(i =0 ; i < strlen(str); i++){
        caractere = tolower(str[i]);
        if(caractere>='a' && caractere <='z'){
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' ||caractere == 'u'){
                vog++;
            }
        }
    }
    return vog;
}
int consoantes(char* str){
    int con =0, i;
    char caractere;
    for(i =0 ; i < strlen(str); i++){
        caractere = tolower(str[i]);
        if(caractere>='a' && caractere <='z'){
            if (caractere != 'a' && caractere != 'e' && caractere != 'i' && caractere != 'o' && caractere != 'u'){
                con++;
            }
        }
    }
    return con;
}
int espacos(char *str){
    int esp =0, i;
    for(i =0 ; i < strlen(str); i++){       
        if(str[i] == ' '){
            esp++;
        }
    }
    return esp;
}

int main(){
    int i;
    char str[150];
    fgets(str, 150, stdin); 
    printf("Vogais: %d, Consoantes: %d, Espacos: %d\n", vogais(str), consoantes(str), espacos(str));
    return 0;
}