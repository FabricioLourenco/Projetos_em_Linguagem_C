#include <stdio.h>

int main(){

    int ENTRADA, ANOS, MESES, DIAS;

    scanf("%d", &ENTRADA);

    ANOS = ENTRADA/365;
    MESES = (ENTRADA%365)/30;
    DIAS = (ENTRADA%365)%30;

    printf("%d ano(s)\n", ANOS);
    printf("%d mes(es)\n", MESES);
    printf("%d dia(s)\n", DIAS);

    return 0;
}