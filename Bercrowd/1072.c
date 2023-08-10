#include <stdio.h>

int main(){

    int N, NUMEROS[10000], i, IN = 0, OUT = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &NUMEROS[i]);
        
        if (NUMEROS[i] >= 10 && NUMEROS[i] <= 20){
            
            IN += 1;
        }else{

            OUT += 1;
        }    
    }
    
    printf("%d in\n", IN);
    printf("%d out\n", OUT);
    
    return 0;

}