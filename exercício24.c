#include<stdio.h>
#include<stdlib.h>

void maiorTemperatura(int temperaturas[12], int* maior, int* mesMaior){
    *maior = temperaturas[0];
    *mesMaior = 1;
    for(int i = 1; i < 12; i++){
        if(temperaturas[i] > *maior){
            *maior = temperaturas[i];
            *mesMaior = i+1;
        }
    }
}

void menorTemperatura(int temperaturas[], int* menor, int* mesMenor) {
    *menor = temperaturas[0];
    *mesMenor = 1;
    for (int i = 1; i < 12; i++) {
        if (temperaturas[i] < *menor) {
            *menor = temperaturas[i];
            *mesMenor = i + 1;
        }
    }
}

void mesExtenso(int mes){
    char *meses[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro",
    "Outubro", "Novembro", "Dezembro"};
    printf("%s", meses[mes-1]);
}

int main(){
    int temperaturas[12];
    int maior, menor, mesMaior, mesMenor;

    printf("Digite a temperatura media de cada mes do ano:\n");
    for(int i = 0; i < 12; i++){
        printf("Mes %d: ", i+1);
        scanf("%d", &temperaturas[i]);
    }
    maiorTemperatura(temperaturas, &maior, &mesMaior);
    menorTemperatura(temperaturas, &menor, &mesMenor);

    printf("A maior temperatura do ano foi %d C no mes de ", maior);
    mesExtenso(mesMaior);
    printf("\nA menor temperatura do ano foi de %d C no mes de ", menor);
    mesExtenso(mesMenor);

    return 0;
}