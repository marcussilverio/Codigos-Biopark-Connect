#include <stdio.h>
/*
    Foi feita uma pesquisa de canal de TV em várias casas da cidade de João Câmara. 
    Para cada casa visitada, foi preenchida uma ficha contendo o número do canal 
    (3, 5, 8, 11 ou 13) e o número de pessoas que estavam assistindo o canal naquela casa. 
    Faça um algoritmo que:
    a. Leia a informação da quantidade de casas participantes da pesquisa.
    b. Receba as informações coletadas em cada uma das casas participantes da
    c. pesquisa: a informação do canal que estava sendo assistido e a quantidade de
    d. pessoas que estava assistindo aquele canal na casa.
    e. Contabilize quantas pessoas estava assistindo cada canal (leve em conta a
    f. quantidade de pessoas que assistia cada canal em cada casa)
    g. Ao finalizar a leitura de todas as fichas, escreva o número do canal e sua
    h. respectiva porcentagem de audiência.
*/
int main(){
    int qtCasas, qtPessoas, opcao, totalPessoas=0, canal_3=0, canal_5=0, canal_8=0, canal_11=0, canal_13=0, i;

    printf("Quantidade de casas participantes: ");
    scanf("%d", &qtCasas);
    for(i = 0; i < qtCasas; i++){
        printf("Qual o canal estava sendo assistido na casa %d: ", i+1);
        scanf("%d", &opcao);
        printf("Quantas pessoas estavam assistindo:");
        scanf("%d", &qtPessoas);
        totalPessoas+=qtPessoas;

        switch(opcao){
            case 3:canal_3+= qtPessoas;break;
            case 5:canal_5+= qtPessoas;break;
            case 8:canal_8+= qtPessoas;break;
            case 11:canal_11+= qtPessoas;break;
            case 13:canal_13+= qtPessoas;break;
            default: break;
        }
    }
    printf("Canal 3: %.2f\n", canal_3*100.0/totalPessoas);
    printf("Canal 5: %.2f\n", canal_5*100.0/totalPessoas);
    printf("Canal 8: %.2f\n", canal_8*100.0/totalPessoas);
    printf("Canal 11: %.2f\n", canal_11*100.0/totalPessoas);
    printf("Canal 13: %.2f\n", canal_13*100.0/totalPessoas);
    return 0;
}