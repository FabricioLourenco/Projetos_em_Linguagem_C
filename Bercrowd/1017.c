#include <stdio.h>
#define CONSUMO 12


int main(){

    int TEMPO_GASTO, VELOCIDADE_MEDIA;
    float LITROS;
    
    scanf("%d", &TEMPO_GASTO);
    scanf("%d", &VELOCIDADE_MEDIA);

    LITROS =((float)TEMPO_GASTO*VELOCIDADE_MEDIA)/CONSUMO;
   
    printf("%.3f\n", LITROS);
    return 0;
}


