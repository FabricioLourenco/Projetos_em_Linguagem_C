#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b){

    int C = *a;
    *a = *b;
    *b = C;   
}

int main(){
    
    int A = 2 , B = 5;

    swap(&A, &B);

    printf("O novo valor de a: %d\n", A);
    printf("O novo valor de b: %d\n", B);
  
    return 0;
}