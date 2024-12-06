#include<stdio.h>

 void verificar_numero(int num){
    if(num < 0){
        printf("O numero eh negativo");
    }
    else
    printf("O numero eh positivo");
}

int main(){
    int numero;
    verificar_numero(numero);
    return 0;
}