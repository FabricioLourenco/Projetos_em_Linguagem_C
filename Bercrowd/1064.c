#include <stdio.h>

int main(){

    int i, POSITIVOS = 0;
    double NUMEROS[6], MEDIA = 0;

    for (i = 0; i < 6; i++){
        
        scanf("%lf", &NUMEROS[i]);
        
        if (NUMEROS[i]>0)
        {
           MEDIA = MEDIA + NUMEROS[i]; 
           POSITIVOS+=1;
        }
    } 
    MEDIA = MEDIA / POSITIVOS;
    printf("%d valores positivos\n", POSITIVOS);
    printf("%.1lf\n", MEDIA);
    return 0;
}