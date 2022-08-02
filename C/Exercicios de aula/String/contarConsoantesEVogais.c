#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i, vogal=0, consoante=0, espaco=0;
    char str[150], caractere;

    fgets(str, 150, stdin);
    for(i =0 ; i < strlen(str); i++){
        caractere = tolower(str[i]);
        if(caractere>='a' && caractere <='z'){
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' ||caractere == 'u'){
                vogal++;
            }else{
                consoante++;
            }
        } else if( str[i] == ' '){
                espaco++;     
        }
    }
    printf("Vogais: %d, Consoantes: %d, Espacos: %d\n", vogal, consoante, espaco);
    return 0;
}