#include <stdio.h>
#include <math.h>

int main(){

    float vetor[5] = {1, 5.1, 2.4, 7.2, 5.3};
    int i = 1;

    while(i < 6){
        if( ((vetor[i-1]) < 5) && (2*vetor[i-1]<10.7) || sqrt(5*vetor[i-1]) > 5.1)
            printf("%.1f ", vetor[i-1]);
        i++;
       
    return 0;
}