#include <stdio.h>

void coletar_dados() {
    float salario, maiorSalario = 0.0, totalSalario = 0.0, totalFilhos = 0.0, percentualInferior380, mediaSalario, mediaFilhos;
    int filhos, pessoas_com_salario_inferior_380 = 0, totalPessoas = 0;

    while (salario != -1) {
        printf("Digite o salário (ou -1 para terminar): R$ ");
        scanf("%f", &salario);
        printf("Digite o número de filhos: ");
        scanf("%d", &filhos);
        totalSalario += salario;
        totalFilhos += filhos;
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }
        if (salario < 380) {
            pessoas_com_salario_inferior_380++;
        }
        totalPessoas++;
    }

    mediaSalario = totalSalario / totalPessoas;
    mediaFilhos = totalFilhos / totalPessoas;
    percentualInferior380 = (pessoas_com_salario_inferior_380 / (float)totalPessoas) * 100;

    printf("\nMédia de salário: R$ %.2f\n", mediaSalario);
    printf("Média de filhos: %.2f\n", mediaFilhos);
    printf("Maior salário: R$ %.2f\n", maiorSalario);
    printf("Percentual de pessoas com salário inferior a R$ 380,00: %.2f%%\n", percentualInferior380);
}

