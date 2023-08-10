#include <stdio.h>

int main(){

    double M[12][12], SOMA=0.0, NUMERO;
    int i, x, y=0, z=12;
    char OPERACAO;

    scanf("%c", &OPERACAO);
    
    for (i = 0; i < 12; i++){

        for (x = 0; x < 12; x++){

            scanf("%lf", &NUMERO);
            M[i][x] = NUMERO;
        }   
    }
    if (OPERACAO == 'S'){

        for (i = 0; i < 12; i++){

            for (x = 0; x < 12; x++){

                if (x < z-1){

                    SOMA += M[i][x];   
                }    
            }
            z--;       
        }
        printf("%.1lf\n", SOMA);
    }
    else if (OPERACAO == 'M'){

        for (i = 0; i < 12; i++){

            for (x = 0; x < 12; x++){

                if (x < z-1){

                    SOMA += M[i][x];
                    y++;
                }
            }
            z--;   
        }
        printf("%.1f\n", SOMA/y);       
    }  
    return 0;
}