#include <stdio.h>

int main(){

    int lin, col;

    for(lin = 0 ; lin < 10; lin++){
        for(col =0; col < 10; col++){
            if(lin == 0 || lin== 9 || lin == col || lin+col == 9 || col == 0 || col == 9)
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}