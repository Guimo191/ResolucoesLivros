#include <stdio.h>
#include <stdbool.h>
bool eh_primo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
void primosAcimaDe100() {
    int count = 0;
    int num = 101;
    
    while (count < 3) {
        if (eh_primo(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
}

int main() {
    printf("Os três primeiros números primos acima de 100 são: ");
    primosAcimaDe100();
    printf("\n");
    return 0;
}

