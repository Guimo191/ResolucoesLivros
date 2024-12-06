#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float somar_resultado(int N){
    float soma = 0;
    for(int i = 1; i <= N; i++){
        soma += (pow(i,2) + 1)/(i + 3);
    }
    return soma;
}

int main(){
    float resultado;
    int numero;
    printf("Digite um numero:");
    scanf("%d", &numero);
    resultado = somar_resultado(numero);
    printf("Resultado da soma: %f\n", resultado);
    return 0;
}
