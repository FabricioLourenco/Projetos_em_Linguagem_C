#include <stdio.h>

int main(){

    int N, i, QUADRADO;

    scanf("%d", &N);

    for (i = 1; i <= N; i++){
        
        if (i%2==0){

            QUADRADO = i*i;
            printf("%d^2 = %d\n", i, QUADRADO);
        }  
    }
    return 0;
}