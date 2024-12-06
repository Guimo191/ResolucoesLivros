#include<stdio.h>
#include<stdlib.h>

void separarVetores(int vetX[30]){
    int vetA[30], vetB[30];
    for(int i = 0; i <= 30; i++){
        if(vetX[i] > 0){
            vetX[i] = vetA[i];
        }
        else{
            vetX[i] = vetB[i];
        }
   }
}