#include<stdio.h>

int peso_ideal(float altura){
    char sexo;
    int peso;
    if(sexo == 'F' || sexo == 'f'){
        peso = 62,1 * altura - 44,7;
        return peso;
    }
    else if(sexo == 'M' || sexo == 'm'){
        peso = 72,8 * altura - 58;
        return peso;
    }
}

int main(){
    float alt;
    char genero;
    int p;
    printf("Digite o seu sexo(F = feminino e M = masculino):");
    scanf("%s", &genero);
    printf("Digite a sua altura:");
    scanf("%f", &alt);
    peso_ideal(alt);
    p = peso_ideal(alt);
    printf("Seu peso ideal e de %d", p);
    return 0;
}