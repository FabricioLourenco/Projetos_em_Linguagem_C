#include <stdio.h>

int main(){

    int N, V[1000], i;

    scanf("%d", &N);

    for (i = 0; i < 1000; i++){

        V[i]= i%N;
        
        printf("N[%d] = %d\n", i, V[i]);
    }
    return 0;
}