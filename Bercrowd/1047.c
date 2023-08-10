#include <stdio.h>

int main(){

    int HOR_INI, MIN_INI, HOR_FIM, MIN_FIM, DIF;

    scanf("%d %d %d %d", &HOR_INI, &MIN_INI, &HOR_FIM, &MIN_FIM);

    DIF = ((HOR_FIM*60)+MIN_FIM) - ((HOR_INI*60)+ MIN_INI);

    if (DIF<=0)
    {
        DIF += 24*60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", DIF/60, DIF%60);
        
    return 0;
}

        