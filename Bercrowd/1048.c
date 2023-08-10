#include <stdio.h>

int main(){

    double SALARIO;

    scanf("%lf", &SALARIO);

    if (SALARIO > 0 && SALARIO <= 400.00){
        
        printf("Novo salario: %.2lf\n", (SALARIO*1.15));
        printf("Reajuste ganho: %.2lf\n", (SALARIO*1.15)-SALARIO);
        printf("Em percentual: 15 %%\n");

    }else if (SALARIO > 400.00 && SALARIO <= 800.00){

        printf("Novo salario: %.2lf\n", (SALARIO*1.12));
        printf("Reajuste ganho: %.2lf\n", (SALARIO*1.12)-SALARIO);
        printf("Em percentual: 12 %%\n");

    }else if (SALARIO > 800.00 && SALARIO <= 1200.00){

        printf("Novo salario: %.2lf\n", (SALARIO*1.10));
        printf("Reajuste ganho: %.2lf\n", (SALARIO*1.10)-SALARIO);
        printf("Em percentual: 10 %%\n");

    }else if (SALARIO > 1200.00 && SALARIO <= 2000.00){

        printf("Novo salario: %.2lf\n", (SALARIO*1.07));
        printf("Reajuste ganho: %.2lf\n", (SALARIO*1.07)-SALARIO);
        printf("Em percentual: 7 %%\n");

    }
    else if(SALARIO > 2000.00){

        printf("Novo salario: %.2lf\n", (SALARIO*1.04));
        printf("Reajuste ganho: %.2lf\n", (SALARIO*1.04)-SALARIO);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}