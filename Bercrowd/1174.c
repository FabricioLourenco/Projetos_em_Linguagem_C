#include <stdio.h>

int main(){

    double V[100];
    int i, x;

    for (i = 0; i < 100; i++){

        scanf("%lf", &V[i]);       
    }
    for (x = 0; x < 100; x++){

        if (V[x] <= 10.0){

            printf("A[%d] = %.1lf\n", x, V[x]);       
        }
    }
    return 0;
}