 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main(){
    char *nome;
    nome = (char*) malloc(50*sizeof(char));
    int idade;

    fflush(stdin);
    printf("Nome: ");
    fgets(nome, 50, stdin);
    fflush(stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Idade: ");
    scanf("%d", &idade);

    printf("%s voce ja viveu %d dias", nome, idade*365);
    return 0;
 }