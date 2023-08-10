#include <stdio.h>
 
int main(){

    int QUANTIDADE, i; 
    double A, B, C, X[1000], MEDIA_PONDERADA;
    
    scanf("%d", &QUANTIDADE);

    for (i = 0; i < QUANTIDADE; i++)
    {
        scanf("%lf %lf %lf", &A, &B, &C);
        MEDIA_PONDERADA = (A*2+B*3+C*5)/10;
        X[i] = MEDIA_PONDERADA;        
    }
    
    for (i = 0; i < QUANTIDADE; i++){ 
        printf("%.1lf\n", X[i]);
    } 
    return 0;   
}
