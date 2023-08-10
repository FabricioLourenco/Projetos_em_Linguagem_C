#include <stdio.h>

int main(){

    int i, vetor[5];
    
    for (i = 0; i < 5; i+=1){
        
        vetor[i] = i + 1;
        printf("%d\n", vetor[i]);
    }
    return 0;
}