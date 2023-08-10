#include <stdio.h>
 
int main(){

    int N, ALU, NOTAS[1000], MEDIA = 0, i, y, w, Z = 0;
    double PORCENTAGEM;

    scanf("%d", &N);

    for (i = 0; i < N; i++){

        scanf("%d", &ALU);

        for (y = 0; y < ALU; y++){

            scanf("%d", &NOTAS[y]);
            MEDIA = MEDIA + NOTAS[y];       
        }  

        MEDIA = MEDIA/ALU;

        for (w = 0; w < ALU ; w++){

            if (NOTAS[w] > MEDIA){

                Z++;    
            }
        }       
        PORCENTAGEM = (Z*100.00)/ALU;        
        printf("%.3lf%%\n", PORCENTAGEM);
        Z = 0;
        MEDIA = 0;    
    }
    return 0;
    
}
