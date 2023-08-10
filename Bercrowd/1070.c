#include <stdio.h>

int main(){

    int X, i;

    scanf("%d", &X);

    if (X%2 == 0){
        X = X+1;
    }else{
        X = X;
    }
    printf("%d\n", X);
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", X += 2);
    }
    
    return 0;
}