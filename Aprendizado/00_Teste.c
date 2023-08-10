#include <stdio.h>

float calculaIMC(float PESO, float ALTURA){

    int IMC = PESO / (ALTURA * ALTURA);
    return IMC;
}

int main(){

    float PESO, ALTURA;

    scanf("%f %f", &PESO, &ALTURA);
    printf("O indice e : %.2f\n", calculaIMC(PESO, ALTURA));
    
return 0;
}

