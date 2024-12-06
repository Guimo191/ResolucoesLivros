#include <stdio.h>

int maiorAcimaDiagonal(int matriz[10][10]) {
    int maiorValor;
    for (int i = 1; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
            }
        }
    }
    return maiorValor;
}

int main() {
    int matriz[10][10];
    int maior = maiorAcimaDiagonal(matriz);
    
    printf("O maior valor acima da diagonal principal é: %d\n", maior);

    return 0;
}
