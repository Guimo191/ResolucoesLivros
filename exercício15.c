#include<stdio.h>

int quantidadePar(int vetX[15]){
    int quantidadeDeNumerosPares = 0;
    for(int i = 0; i <= 15; i++){
        if(vetX[i] % 2 == 0){
            quantidadeDeNumerosPares++;
        }
    }
    return quantidadeDeNumerosPares;
}