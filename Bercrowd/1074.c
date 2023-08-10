#include <stdio.h>

int main(){

    int N, i, NUMERO[1000];

    scanf("%d", &N);

    for (i = 0; i < N; i++){

        scanf("%d", &NUMERO[i]);
        
        if (NUMERO[i] > 0 && NUMERO[i]%2 == 0){

            printf("EVEN POSITIVE\n");

        }else if (NUMERO[i] > 0 && NUMERO[i]%2 != 0){
            
            printf("ODD POSITIVE\n");

        }else if (NUMERO[i] < 0 && NUMERO[i]%2 == 0){
            
            printf("EVEN NEGATIVE\n");

        }else if (NUMERO[i] < 0 && NUMERO[i]%2 != 0){
            
            printf("ODD NEGATIVE\n");

        }else if (NUMERO[i] == 0){
            
            printf("NULL\n");
        }   
    }
    return 0;
}