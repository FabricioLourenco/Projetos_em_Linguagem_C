#include <stdio.h>

int main(){

    double M[12][12], SOMA=0, MEDIA=0, NUMERO;
    int POSICAO, i, x;
    char OPERACAO;

    scanf("%d %c", &POSICAO, &OPERACAO);
    
    for (i = 0; i < 12; i++){

        for (x = 0; x < 12; x++){

            scanf("%lf", &NUMERO);
            M[i][x] = NUMERO;
        }   
    }
    i = POSICAO;
    if (OPERACAO == 'S'){

        while (i == POSICAO){

            for (x = 0; x < 12; x++){

            SOMA+=M[i][x]; 
        }
        i++;    
        }
        printf("%.1lf\n", SOMA);               
    }
    else if (OPERACAO == 'M'){

        while (i == POSICAO){

            for (x = 0; x < 12; x++){

            MEDIA+=M[i][x]; 
        }
        i++;
        }
        printf("%.1lf\n", MEDIA/12);               
    }
    return 0;
}