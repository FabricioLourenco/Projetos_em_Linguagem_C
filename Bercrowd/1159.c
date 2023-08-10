#include <stdio.h>

int main(){

    int X, i, SOMA = 0;

    scanf("%d", &X);
    
    while (X != 0){

        if (X%2 != 0){

            X = X+1;
            for (i = 0; i < 5; i++){

                SOMA = SOMA + X;
                X+=2;
            }

            printf("%d\n", SOMA);
            SOMA = 0;
            scanf("%d", &X);
        
        }else{           
            
            for (i = 0; i < 5; i++){

                SOMA = SOMA + X;
                X+=2;
            }

            printf("%d\n", SOMA);
            SOMA = 0;
            scanf("%d", &X);       
        }
    }   
    return 0;
}