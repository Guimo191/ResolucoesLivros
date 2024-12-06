#include<stdio.h>
#include<stdlib.h>

double somar_valores(int N){
    double S = 0.0;
    for(int i = 1; i <= N; i++){
        S += 1.0/i;
    }
    return S;
}

int main(){
    int num;
    double resultado;
    printf("Digite um numero para a conta:");
    scanf("%d", &num);
    resultado = somar_valores(num);
    printf("A soma dos valores e %f", resultado);
    return 0;
}