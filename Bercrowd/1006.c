#include <stdio.h>

int main(){

    double A, B, C, MEDIA, podA, podB, podC;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    podA =(A*0.2);
    podB =(B*0.3);
    podC =(C*0.5);
    MEDIA =(podA+podB+podC);
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}