#include <stdio.h>
#include <math.h>

int main(){

    float X1, X2, Y1, Y2;
    float DISTANCIA, RAIZ;

    scanf("%f %f", &X1, &Y1);
    scanf("%f %f", &X2, &Y2);

    DISTANCIA = pow(X2-X1,2) + pow(Y2-Y1,2);
    RAIZ = sqrt(DISTANCIA);

    printf("%.4f\n", RAIZ);
    return 0;
}