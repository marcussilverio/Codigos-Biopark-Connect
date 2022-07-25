#include <stdio.h>
/*
    Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a 
    R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X. 
*/
int main(){

    int R[5], S[10], X[5], i, j, c=0;;
    printf("Vetor R: \n");
    for(i =0; i<5 ; i++){
        scanf("%d", &R[i]);
    }
    printf("Vetor S: \n");
    for(i =0; i<10 ; i++){
        scanf("%d", &S[i]);
    }

    for(i = 0 ; i< 10 ; i++){
        for(j=0; j< 5; j++){
            if(R[j] == S[i]){                
                X[c] = R[j];
                c++;
                i++;
            }
        }
    }
    
    for(i =0; i<c ; i++){
        printf("%d ", X[i]);
    }
    return 0;
}