#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    double A, B, C, X1, X2, DELTA;

    scanf("%lf %lf %lf", &A, &B, &C);

    DELTA =(B*B)-(4*A*C);
    X1 = ((-B) + (sqrt(DELTA))) / (2*A);
    X2 = ((-B) - (sqrt(DELTA))) / (2*A);

    if (DELTA <= 0.0 || A == 0 || B == 0 || C == 0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\n", X1);
        printf("R2 = %.5lf\n", X2); 
    }
}