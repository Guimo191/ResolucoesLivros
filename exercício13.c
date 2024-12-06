#include<stdio.h>
#include<stdlib.h>

struct habitantes{
    int idade;
    char sexo[20];
    float salario;
    int filhos;
};
struct habitantes vetorHabitantes[15];

float mediaSalario(){
    float media = 0;
    for(int i = 0; i <= 14; i++){
        media += vetorHabitantes[i].salario/15;
    }
    return media;
}

int selecionar_maiorIdade(){
    int maiorIdade;
    for(int i = 0; i <= 14; i++){
        if(vetorHabitantes[i].idade < vetorHabitantes[i-1].idade){
            maiorIdade = vetorHabitantes[i].idade;
        }
    }
    printf("A menor idade do conjunto de habitantes e %d", maiorIdade);
    return maiorIdade;
}
int selecionar_menorIdade(){
    int menorIdade;
    for(int i = 0; i <= 14; i++){
        if(vetorHabitantes[i].idade < vetorHabitantes[i-1].idade){
            menorIdade = vetorHabitantes[i].idade;
        }
    }
    printf("A menor idade do conjunto de habitantes e %d", menorIdade);
    return menorIdade;
}

int qtdMulheres(){
    int numeroMulheres = 0;
    for(int i = 0; i <= 14; i++){
        if(vetorHabitantes[i].sexo == 'F' || vetorHabitantes[i].sexo == 'f'){
            if(vetorHabitantes[i].filhos == 3){
                if(vetorHabitantes[i].salario < 500,00){
                    numeroMulheres++;
                }
            }
        }
    }
    printf("A quantidade de mulheres com essas caracteristicas e %d", numeroMulheres);
    return numeroMulheres;
}

int main(){
    int opcao;
    printf("Oque deseja fazer:\n1-Media Salarial\n2-A maior idade entre os habitantes\n3-A menor idade entre os habitantes\n4-Quantidade de mulheres com 3 filhos e salario de ate 500,00 reais\n");
    scanf("%d", opcao);
    switch(opcao){
        case 1:
        mediaSalario();
        break;
        case 2:
        selecionar_maiorIdade();
        break;
        case 3:
        selecionar_menorIdade();
        break;
        case 4:
        qtdMulheres();
        break;
        }
    }

