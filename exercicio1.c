#include<stdio.h>

void receber_numero(int numero){
    int soma = 0;
    if(numero < 0){
        printf("Numero Invalido");
    }else{
        for(int i = 0; i<=numero; i++){
            soma= i + soma;
        }
    }
    soma = soma + numero;   
    printf("%i", soma);
}

int main(){
    int n;
    printf("Escreva o numero: ");
    scanf("%d", &n);
    receber_numero(n);
    return 0;
}