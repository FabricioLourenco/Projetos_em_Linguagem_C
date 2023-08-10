#include <stdio.h>

int main(){

    int DISTANCIA;
    float COMBUSTIVEL, CONSUMO;
    
    scanf("%d", &DISTANCIA);
    scanf("%f", &COMBUSTIVEL);
    
    CONSUMO = (DISTANCIA/COMBUSTIVEL);
    printf("%.3f km/l\n", CONSUMO);
    return 0;
}