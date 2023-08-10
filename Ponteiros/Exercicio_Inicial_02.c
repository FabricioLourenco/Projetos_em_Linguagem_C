#include <stdio.h>

void calcula_quadrado (int lado, float *area, float *perimetro){

    *area = lado * lado;
    *perimetro = lado + lado + lado + lado;
    
}

int main(){
    
    int LADO = 5;
    float AREA = 0.0, PERIMETR0 = 0.0;

    calcula_quadrado(LADO, &AREA, &PERIMETR0);

    printf("O valor da area: %.2f\n", AREA);
    printf("O valor do perimetro: %.2f\n", PERIMETR0);
  
    return 0;
}