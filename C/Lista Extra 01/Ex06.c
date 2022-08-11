/*
    Considere o código em C abaixo: 
    a)Determine quais são as variáveis locais e globais deste programa, identificando a que função
    pertence cada variável local.
        - Variaveis globais: i, j.
        - Variaveis locais:
            funcao soma1 : q, c, soma.
            funcao soma2 : ra, k.
            funcao main : i, k, ra, p.
    b)Mostre o que será impresso na tela do computador quando for executado este programa.
        i = 0
            k = ra + i + p = 5 + 10 + 10 = 25
            ra = k + j = 25+20 = 45
        i = 1
            k = ra + i + p = 45 + 10 + 10 = 65
            ra = k + j = 65 + 20 = 85
        i = 2
            k = ra + i + p = 85 + 10 + 10 = 105
            ra = k + j = 105 + 20 = 125
    output :
        45, 25
        85, 65
        125, 105
*/
#include <stdio.h>
int soma1(int q, int c);
int soma2(int ra);
int i = 10;
int j = 20;
int main()
{
    int i, k, ra, p;
    p = 10;
    ra = 5;
    for (i = 0; i < 3; i++)
    {
        k = soma1(ra, p);
        ra = soma2(k);
        printf("%d, %d\n", ra, k);
    }
}
int soma1(int q, int c)
{
    int soma = q + i + c;
    return soma;
}
int soma2(int ra)
{
    int k = j;
    ra = ra + k;
    return ra;
}