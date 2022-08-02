#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, vogal=0, consoante=0, espaco=0;
    char str[150];

    fgets(str, 150, stdin);
    for(i =0 ; i < strlen(str); i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||str[i] == 'u'){
            vogal++;
        }else if( str[i] == ' '){
            espaco++;
        }else if( str[i] != '\0' && str[i] != '\n'){
            consoante++;
        }
    }
    printf("Vogais: %d, Consoantes: %d, Espacos: %d\n", vogal, consoante, espaco);
    return 0;
}