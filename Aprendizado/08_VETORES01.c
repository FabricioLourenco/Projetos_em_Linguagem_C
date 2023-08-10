#include <stdio.h>

int main(){

    int V[5];
    float MEDIA;

    V[0] = 50;
    V[1] = 40;
    V[2] = 30;
    V[3] = 20;
    V[4] = 10;

    MEDIA = (V[0] + V[1] + V[2] + V[3] + V[4]) / 5;
    
    printf("Resultado: %f\n", MEDIA);

    return 0;
}