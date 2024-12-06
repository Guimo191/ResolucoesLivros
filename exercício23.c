#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

bool determinarTriangulo(int lado1, int lado2, int lado3){
    if(lado1 >= lado2 + lado3 || lado2 >= lado1 + lado3 || lado3 >= lado1 + lado2){
        printf("Nao eh um triangulo\n");
        return false;
    }else{
        printf("Eh um triangulo\n");
        return true;
    }
}

void tipoTriangulo(int lado1, int lado2, int lado3){
    if(lado1 == lado2 && lado1 == lado3){
        printf("O triangulo eh equilatero\n");
    }else if((lado1 == lado2 && lado1!= lado3) || (lado1 == lado3 && lado1 != lado2) || (lado2 == lado3 && lado2 != lado1)){
        printf("O triangulo eh isosceles\n");
    }
    else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
        printf("O triangulo eh escaleno\n");
    }
}

int main(){
    int l1, l2, l3;
    printf("--Lados de um triangulo--\n");
    printf("Lado1:");
    scanf("%d", &l1);
    printf("Lado2:");
    scanf("%d", &l2);
    printf("Lado3:");
    scanf("%d", &l3);
    determinarTriangulo(l1, l2, l3);
    if(determinarTriangulo(l1, l2, l3) == true){
        tipoTriangulo(l1, l2, l3);
    }
}