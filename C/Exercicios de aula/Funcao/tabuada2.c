#include <stdio.h>

void tabuada(int num){
    int i;
    for(i =0; i< 10; i++)
        printf("%d x %d = %d\n", num, i+1, (i+1)*num );
}
void todasTabuadas(){
    int i;
    for(i=1; i<=10 ;i++){
        printf("============  TABUADA DO %d ============\n", i);
        tabuada(i);
    }
}

int main(){
    todasTabuadas();
    return 0;
}