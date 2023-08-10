#include <stdio.h>

int main(){

    char NOME;
    double SALARIO, VENDAS, COMISSAO, TOTAL;

    scanf("%s", &NOME);
    scanf("%lf", &SALARIO);
    scanf("%lf", &VENDAS);

    COMISSAO = (VENDAS*0.15);
    TOTAL = (SALARIO+COMISSAO);

    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}
