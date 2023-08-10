#include <stdio.h>

int main(){

    int X, Y, i, SOMA = 0;

    scanf("%d %d", &X, &Y);

    if (X < Y){

        for (i = X+1; i < Y; i++)
        {
            if (i%2!=0){

                SOMA += i;
            }  
        }
    }else{

         for (i = Y+1; i < X; i++)
        {
            if (i%2!=0){

                SOMA += i;
            }  
        }
    }
    
    printf("%d\n", SOMA);
    
    return 0;
}