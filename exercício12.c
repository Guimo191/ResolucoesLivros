#include<stdio.h>
#include<stdlib.h>

float potencia(int numerador, int expoente){
    float potencia = 1;
    if(expoente == 0){
        potencia = 1;
        return potencia;
    }
    else{
    for(int i = 1; i<=expoente; i++){
        potencia *= numerador;
    }
    return potencia;
    }
}

int main(){
    int X, Z;
    float p;
    printf("Digite o valor de X(numerador):");
    scanf("%d", &X);
    printf("Digite o valor de Z(expoente):");
    scanf("%d", &Z);
    p = potencia(X,Z);
    printf("A potencia de %d elevado a %d eh:%.2f", X, Z, p);
    return 0;
}