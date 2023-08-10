#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(){

    double RAIO, VOLUME;

    scanf("%lf", &RAIO);

    VOLUME = (((4/3.0)*pi)*(pow(RAIO, 3)));

    printf("VOLUME = %.3lf", VOLUME);

    return 0;
}