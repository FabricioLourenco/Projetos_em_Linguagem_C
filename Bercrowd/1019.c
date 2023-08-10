#include <stdio.h>

int main(){

    int ENTRADA, HORAS, MINUTOS, SEGUNDOS;

    scanf("%d", &ENTRADA);

    HORAS = ENTRADA / 3600;
    MINUTOS = (ENTRADA%3600)/60;
    SEGUNDOS = (ENTRADA%60);

    printf("%d:%d:%d\n", HORAS, MINUTOS, SEGUNDOS);

    return 0;
}