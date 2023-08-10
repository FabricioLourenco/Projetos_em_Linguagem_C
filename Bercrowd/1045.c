#include <stdio.h>
#include <math.h>

int main(){

    double V[3], AUX;
    int i, N1, N2;

    for (i = 0; i < 3; i++)
    {
        scanf("%lf", &V[i]);
    }
    for (N1 = 0; N1 < 3 ; N1++)
    {
        for (N2 = 0; N2 < 2; N2++)
        {
            if (V[N1] > V[N2])
            {
                AUX = V[N2];
                V[N2] = V[N1];
                V[N1] = AUX;
            }  
        }   
    }
    if (V[0] >= (V[1] + V[2]))
    {
         printf("NAO FORMA TRIANGULO\n");
    } 
    else{ 
    
    if (pow(V[0],2) == (pow(V[1],2) + pow(V[2],2)))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if (pow(V[0],2) > (pow(V[1],2) + pow(V[2],2)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if (pow(V[0],2) < (pow(V[1],2) + pow(V[2],2)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (V[0] == V[1] && V[1] == V[2])
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if (V[0] == V[1] && V[0] != V[2] && V[2] != V[1])
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    if (V[1] == V[2] && V[0] != V[1] && V[0] != V[2])
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    if (V[0] == V[2] && V[2] != V[1] && V[0] != V[1])
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    }        
return 0;
}