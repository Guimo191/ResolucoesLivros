#include<stdio.h>

int converter_horas(int horas, int minutos, int segundos){
    int soma_segundos = 0;
    soma_segundos += horas *3600;
    soma_segundos += minutos * 60;
    soma_segundos += segundos;
    return soma_segundos; 
}

int main(){
    int h, m, s, resultado;
    printf("Digite o tempo(hh:mm:ss):");
    scanf("%d:%d:%d", &h, &m, &s);
    converter_horas(h, m, s);
    resultado = converter_horas(h, m, s);
    printf("O tempo %d:%d:%d em segundos eh %d segundos.", h, m, s, resultado);
    return 0;
}