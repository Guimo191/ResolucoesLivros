#include<stdio.h>

int somar_divisores(int num){
    int resto, resultado;
    if(num < 0){
        printf("Numero invalido...");
    }
    else{
        for(int i = 0; i < num; i++){
            resto = num % i == 0;
            if(resto == 0){
                resultado += resto;
            }
        }
    return resultado;
    }
}
int main(){
    int numero, r;
    printf("Digite o numero:");
    scanf("%d", &numero);
    r = somar_divisores(numero);   
    printf("A soma dos divisores de %d eh %d", numero, r);
}