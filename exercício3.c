#include<stdio.h>

int divisao_numeros(int numero1, int numero2){

    if(numero1 % numero2 == 0){
        return 0;
    }
    else 
    for(int i = 0; i<numero2; i++){
        if(numero1 % i == 0){
            return i;
        }
        else 
        numero2++;
    }
}

int main(){
    int n1, n2, resultado;
    printf("Digite os dois numeros:");
    scanf("%d ""%d", &n1, &n2);
    divisao_numeros(n1, n2);
    resultado = divisao_numeros(n1, n2);
    printf("%d", resultado);
    return 0;
}