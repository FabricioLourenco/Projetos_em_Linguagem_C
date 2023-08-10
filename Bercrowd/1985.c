#include <stdio.h>
 
int main(){

    int PED, i, QUANT;
    double ITEM, RESULTADO = 0.0;

    scanf("%d", &PED);
    
    for (i = 0; i < PED; i++){
        
        scanf("%lf %d", &ITEM, &QUANT);
        
        if (ITEM == 1001)
        {
            ITEM = 1.50;
        }
        if (ITEM == 1002)
        {
            ITEM = 2.50;
        }
        if (ITEM == 1003)
        {
            ITEM = 3.50;
        }
        if (ITEM == 1004)
        {
            ITEM = 4.50;
        }
        if (ITEM == 1005)
        {
            ITEM = 5.50;
        }

        RESULTADO = RESULTADO+ITEM*QUANT;

    }
        printf("%.2lf\n", RESULTADO);

    return 0;
    
}
