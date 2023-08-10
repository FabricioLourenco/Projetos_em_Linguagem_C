#include <stdio.h>

int main(){

    int N, i, A = 1, B = 2, C = 3;

    scanf("%d", &N);

    for (i = 0; i < N; i++){
        
        printf("%d %d %d PUM\n", A, B, C);
        A += 4;
        B += 4;
        C += 4;
    }   

    return 0;
}