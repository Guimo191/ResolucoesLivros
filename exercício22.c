#include<stdio.h>
#include<stdlib.h>

void receberMatriz(int matriz[10][5]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 5; j++){
            printf("Digite o valor da matriz:\n matriz[%d][%d]", i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int somaElementosAposLinha6(int matriz[10][5]){
    int soma = 0;
    for(int i = 5; i < 10; i++){
        for(int j = 0; j < 5; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main(){
    int op, s;
    int m[10][5];
    while(op != 3){
        printf("Matriz\n1- Escrever a matriz\n2- Somar os elementos apos a a linha 6\n3- Sair\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                receberMatriz(m);
                printf("Matriz:\n");
                for(int i = 0; i < 10; i++){
                    for(int j = 0; j < 5; j++){
                        printf("%d ", m[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 2:
                s = somaElementosAposLinha6(m);
                printf("A soma dos valores apos a linha seis eh %d\n", s);
                break;
            case 3:
                return 0;
        }
    }
}
