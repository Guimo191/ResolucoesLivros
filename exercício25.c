#include<stdio.h>
#include<stdlib.h>

float calcularMedia(float notas[]){
    float soma = 0;
    for(int i = 0; i < 4; i++){
        soma += notas[i];
    }
    return soma / 4;
}


void calcularMediaGeral(int alunos[], float notas[10][4]){
    float media;
    printf("Media dos alunos\n");
    for(int i = 0; i < 10; i++){
        media = calcularMedia(notas[i]);
        printf("Aluno %d: Media = .2%f\n", alunos[i], media);
    }
}

void alunosRecuperacao(int alunos[], float notas[10][4]){
    float media;
    printf("Alunos de Recuperacao\n");
    for(int i = 0; i < 10; i++){
        media = calcularMedia(notas[i]);
        if(media < 6){
            printf("Aluno %d: Media = .2%f\n", alunos[i]);
        }
    }
}

int main(){
    int estudantes[10];
    float n[10][4];

    printf("Digite o numero do aluno e suas notas:\n");
    for(int i = 0; i < 10; i++){
        printf("Aluno %d:\n Numero: ", i+1);
        scanf("%d", &estudantes[i]);

        for(int j = 0; j < 4; j++){
            printf("Nota %d: ", j+1);
            scanf("%f", &n[i][j]);
        }
    }
    calcularMediaGeral(estudantes, n);
    alunosRecuperacao(estudantes, n);

    return 0;
}