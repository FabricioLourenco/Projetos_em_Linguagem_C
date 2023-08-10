#include <stdio.h>

int main(){

    int TOTAL, NOTA_100, NOTA_50, NOTA_20, NOTA_10, NOTA_5, NOTA_2, NOTA_1, RESTO;

    scanf("%d", &TOTAL);

    NOTA_100 = TOTAL / 100;
    RESTO = TOTAL%100;
    NOTA_50 = RESTO / 50;
    RESTO = RESTO%50;
    NOTA_20 = RESTO / 20;
    RESTO = RESTO%20;
    NOTA_10 = RESTO / 10;
    RESTO = RESTO%10;
    NOTA_5 = RESTO / 5;
    RESTO = RESTO%5;
    NOTA_2 = RESTO / 2;
    RESTO = RESTO%2;
    NOTA_1 = RESTO/ 1;

    printf("%d\n", TOTAL);
    printf("%d nota(s) de R$ 100,00\n", NOTA_100);
    printf("%d nota(s) de R$ 50,00\n", NOTA_50);
    printf("%d nota(s) de R$ 20,00\n", NOTA_20);
    printf("%d nota(s) de R$ 10,00\n", NOTA_10);
    printf("%d nota(s) de R$ 5,00\n", NOTA_5);
    printf("%d nota(s) de R$ 2,00\n", NOTA_2);
    printf("%d nota(s) de R$ 1,00\n", NOTA_1);

    return 0;
}