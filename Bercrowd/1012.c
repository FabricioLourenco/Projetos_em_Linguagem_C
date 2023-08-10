#include <stdio.h>
#include <math.h>
#define pi 3.14159


int main(){

    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

    scanf("%lf %lf %lf", &A, &B, &C);

    TRIANGULO = (A*C)/2;
    CIRCULO = pi * pow(C,2);
    TRAPEZIO = (A+B)/2*C;
    QUADRADO = pow(B,2);
    RETANGULO = A*B;

    printf("TRIANGULO: %.3lf\n", TRIANGULO);
    printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
    printf("QUADRADO: %.3lf\n", QUADRADO);
    printf("RETANGULO: %.3lf\n", RETANGULO);
   
    return 0;
}