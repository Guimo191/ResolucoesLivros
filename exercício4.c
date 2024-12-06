#include<stdio.h>
#include<math.h>

int calcular_volume(float raio){
    float volume = 0;
    volume = (4 * pow(3,raio))/3;
    return volume;
}

int main(){
    float r, v;
    printf("Digite o valor do raio da esfera:");
    scanf("%f", &r);
    calcular_volume(r);
    v = calcular_volume(r);
    printf("Volume da esfera:%f", v);
    return 0;
}