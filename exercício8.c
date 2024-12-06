#include<stdio.h>

int soma_fatorial(int num){
    int a = 1;
    if(num < 0){
        printf("Numero invalido...");
    }else if(num == 0){
        return 1;
    }
    else{
        for(int i = 1; i<=num; i++){
            a *= i;
        }
    return a;
    }
}

int main(){
    int numero, resultado;
    printf("Digite o numero:");
    scanf("%d", &numero);
    resultado = soma_fatorial(numero);
    printf(" O resultado do fatorial de %d eh %i", numero, resultado);
    return 0;
}