#include <stdio.h>

int main(){

    int V[5] = {10, 20, 30, 40, 50};
    int i;
    float SOMA;

    for (i = 0; i < 5; i++){ 
        SOMA += V[i];
    } 
    
    printf("Resultado: %f\n", SOMA/5);
    return 0;
}