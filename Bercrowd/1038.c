#include <stdio.h>

int main(){

    int PED, QUANT;

    scanf("%d %d", &PED, &QUANT);

    if (PED == 1)
    {
        printf("Total: R$ %.2f\n", QUANT*4.00);
    }
    else if (PED == 2)
    {
        printf("Total: R$ %.2f\n", QUANT*4.50);
    }
    else if (PED == 3)
    {
        printf("Total: R$ %.2f\n", QUANT*5.00);
    }
    else if (PED == 4)
    {
        printf("Total: R$ %.2f\n", QUANT*2.00);
    }
    else if (PED == 5)
    {
        printf("Total: R$ %.2f\n", QUANT*1.50);
    }
    return 0;
}