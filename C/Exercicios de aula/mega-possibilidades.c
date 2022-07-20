#include <stdio.h>
#include <stdlib.h>
/*
    Um jogador da mega-sena supersticioso quer jogar na mega mas so joga se a ordem dos numeros for:
    par impar par impar par impar
    fazer por forca bruta quantas possibilidades de jogos existem para esse jogador.
    
*/

int main() {

    int contadora = 0;
    //resolucao com if
    
    for (int d1=2; d1<=60 ; d1++) {
        for (int d2=1; d2<=60; d2++) {
            for (int d3=d1+2; d3<=60; d3++) {
                for (int d4=d2+2; d4<=60; d4++) {
                    for (int d5=d3+2; d5<=60; d5++) {
                        for (int d6=d4+2; d6<=60; d6++) {
                            if(d1%2 ==0 && d2%2 ==1 && d3%2 ==0 && d4%2 ==1 && d5%2 ==0 && d6%2 ==1)
                            contadora++;
                        }
                    }
                }
            }
        }
    }
    
    //resolucao sem if
    /*
    for (int d1=2; d1<=60 ; d1+=2) {
        for (int d2=(d1+2); d2<=60; d2+=2) {
            for (int d3=(d2+1); d3<=60; d3+=2 ){
                for (int d4=(d3+1); d4<=60; d4+=2) {
                    for (int d5=(d4+1); d5<=60; d5+=2) {
                        for (int d6=(d5+1); d6<=60; d6+=2) {
                            contadora++;
                        }
                    }
                }
            }
        }
    }
    */


    printf("\nReposta: %d\n", contadora);


    return 0;
}

