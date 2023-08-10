#include <stdio.h>

int main(){

    int V[10], N, i;

    scanf("%d", &N);

    for (i = 0; i < 10; i++)
    {
        V[i] = N;
        printf("N[%d] = %d\n", i, N);
        N = N+N;
    }

    return 0;
}