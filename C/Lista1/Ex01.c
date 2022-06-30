 #include<stdio.h>
float area(float a, float b){
    return a*b;
}
 int main(){
    float comprimento, largura;

    scanf("%f", &comprimento);
    scanf("%f", &largura);

    printf("Area: %.2f m2", area(comprimento, largura));
    return 0;
 }