#include <stdio.h>

int main(){

    int COD_PROD01, COD_PROD02, QUANT_PROD01, QUANT_PROD02;
    double VALOR_UNI_PROD01, VALOR_UNI_PROD02, VALOR_A_PAGAR;

    scanf("%d %d %lf", &COD_PROD01, &QUANT_PROD01, &VALOR_UNI_PROD01);
    scanf("%d %d %lf", &COD_PROD02, &QUANT_PROD02, &VALOR_UNI_PROD02);

    VALOR_A_PAGAR =((QUANT_PROD01*VALOR_UNI_PROD01) + (QUANT_PROD02*VALOR_UNI_PROD02));

    printf("VALOR A PAGAR: R$ %.2lf\n", VALOR_A_PAGAR);
    return 0;
}