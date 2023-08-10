#include <stdio.h>

int main(){

    double n = 3.14159;
    double r;
    double area;

    scanf("%lf", &r);
    area = (r*r*n);
    printf ("A = %.4lf\n", area);
    return 0;
}