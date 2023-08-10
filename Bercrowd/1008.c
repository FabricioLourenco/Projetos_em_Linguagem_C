#include <stdio.h>

int main(){

    int NUMBER, HORAS; 
    float CUSTO_HORA, SALARY;

    scanf("%d", &NUMBER);
    scanf("%d", &HORAS);
    scanf("%f", &CUSTO_HORA);
    SALARY = (HORAS*CUSTO_HORA);

    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);
    return 0;
}