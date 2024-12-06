#include<stdio.h>

int intersecao(int vetX[10], int vetY[10]){
    int vetIntersecao[10];
    for(int i = 0; i <= 10; i++){
        for(int j = 0; j <= 10; j++){
            if(vetX[i] == vetY[j]){
                vetX[i] = vetIntersecao[i];
            }
        }
    }
    return vetIntersecao[10];
}