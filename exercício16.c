#include<stdio.h>
#include<stdlib.h>

int somarValores(int vetX[20]){
    int soma;
    for(int i = 0; i <= 20; i++){
        soma += vetX[i];
    }
    return soma;
}
