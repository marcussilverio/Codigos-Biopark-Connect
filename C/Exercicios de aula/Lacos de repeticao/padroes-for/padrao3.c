#include <stdio.h>
/*
  # # # # # # # # # 
    # # # # # # # #
      # # # # # # #
        # # # # # #
          # # # # #
            # # # #
              # # #
                # #
                  #
*/
int main(){

    int lin, col;

    for(lin = 0 ; lin < 10; lin++){
        for(col =0; col < 10; col++){
            if(lin >= col)
                printf("  ");
            else
                printf("# ");
        }
        printf("\n");
    }
    return 0;
}