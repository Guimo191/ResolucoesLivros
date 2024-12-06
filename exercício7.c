#include<stdio.h>

float calcular_media(){
    float soma = 0;
    char opcao;
    int numero, media = 0;
    while(opcao != 'n'){
        printf("Digite um numero para a soma:");
        scanf("%d", &numero);
        soma += numero;
        media++;
        printf("Deseja continuar somando?(s/n)");
        scanf(" %c", &opcao);
    }
    return soma / media;
}


int main(){
    float med;

    med = calcular_media();
    printf("A media dos valores eh %.2f", med);
    return 0;
}