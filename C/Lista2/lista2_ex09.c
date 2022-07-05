#include <stdio.h>

int main(){
    int id;
    float nota1, nota2, nota3, media;

    printf("Numero de identificacao do aluno: \n");
    scanf("%d", &id);
    
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);

    media = nota1 + nota2 + nota3;
    media = media/3;
    printf("Nota: %.2f", &media);
    if(media >= 6){
        printf("Aprovado!\n");
    }else if(media >= 4.5 && media <6){
        printf("Recuperacao\n");
    }else{
        printf("Reprovado\n");
    }
    return 0;
}