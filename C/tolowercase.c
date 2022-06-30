#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* tolowercase(char* string){
    int i, lengh;
    lengh = strlen(string);
    for(i = 0; i < lengh; i++){
        if (string[i] > 64 && string[i] < 91)
            string[i]+= 32;
    }
    return string;
}

int main(){
    char *string;
    int option;

    string = (char*) malloc(42*sizeof(char));
    printf("1-lowercase\n2-sair\n");
    scanf("%d", &option);
    while(option == 1){
        fflush(stdin);
        fgets(string, 42, stdin);
        printf("lowercase: %s", tolowercase(string));
        printf("1-lowercase\n2-sair\n");
        scanf("%d", &option);
    }

    return 0;
} 