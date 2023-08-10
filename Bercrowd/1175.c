#include <stdio.h>

int main(){

    int V[20], i, x, y = 0;

    for (i = 0; i < 20; i++){

        scanf("%d", &V[i]);

    }
    for (x = 19; x >= 0; x--){

        printf("N[%d] = %d\n", y, V[x]);
        y++;
    }
    return 0;
}