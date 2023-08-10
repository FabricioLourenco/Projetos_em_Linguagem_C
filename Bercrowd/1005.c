#include <stdio.h>

int main(){

    double A, B, MEDIA, podA, podB;

    scanf("%lf", &A);
    scanf("%lf", &B);
    podA =(((0.035*100)/11)*A);
    podB =(((0.075*100)/11)*B);
    MEDIA =(podA+podB);
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}