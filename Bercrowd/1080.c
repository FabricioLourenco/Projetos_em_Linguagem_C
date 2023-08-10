#include <stdio.h>

int main(){

    int V[100], i, AUX = 0, POS = 0;

    for (i = 0; i < 100; i++){

        scanf("%d", &V[i]);

        if (V[i] > AUX){

            AUX = V[i];
            POS = i+1;
        }        
    }
    
    printf("%d\n", AUX);
    printf("%d\n", POS);

    return 0;
}