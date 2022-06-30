#include<stdio.h>
double soma(double a, double b){
    return a+b;
}
double subtrai(double a, double b){
    return a-b;
}
double multiplica(double a, double b){
    return a*b;
}
double divide(double a, double b){
    return (b != 0)? a/b : 0;
}

int main(){

    double a, b;

    scanf("%lf %lf", &a, &b);
    printf("soma: %lf\n", soma(a,b));
    printf("subtracao: %lf\n", subtrai(a,b));
    printf("multiplicacao: %lf\n", multiplica(a,b));
    printf("divisao: %lf\n", divide(a,b));
    return 0;
} 