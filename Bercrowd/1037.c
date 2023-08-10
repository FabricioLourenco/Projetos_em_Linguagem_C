#include <stdio.h>

int main(){

    double ENTRADA;

    scanf("%lf", &ENTRADA);

    if (ENTRADA >= 0 &&  ENTRADA <= 25.0000)
    {
        printf("Intervalo [0,25]\n");
    }
    else if (ENTRADA >= 25.0001 && ENTRADA <= 50.0000)
    {
        printf("Intervalo (25,50]\n");
    }
    else if (ENTRADA >= 50.0001 && ENTRADA <= 75.0000)
    {
        printf("Intervalo (50,75]\n");
    }
    else if (ENTRADA >= 75.0001 && ENTRADA <= 100.0000)
    {
        printf("Intervalo (75,100]\n");
    }
    else
    {
        printf("Fora de intervalo\n");
    }
    
    return 0;  
}