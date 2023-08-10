#include <stdio.h>

int main(){

    double N1, N2, N3, N4, MEDIA_PONDERADA, N_EXAME, MEDIA_FINAL;

    scanf("%lf", &N1);
    scanf("%lf", &N2);
    scanf("%lf", &N3);
    scanf("%lf", &N4);

    MEDIA_PONDERADA = (N1*2+N2*3+N3*4+N4*1)/10;

    if (MEDIA_PONDERADA >= 7){
        
        printf("Media: %.1lf\n", MEDIA_PONDERADA);
        printf("Aluno aprovado.\n");
    }
    else if(MEDIA_PONDERADA >= 5.0 && MEDIA_PONDERADA < 7){
        
        printf("Media: %.1lf\n", MEDIA_PONDERADA);
        printf("Aluno em exame.\n");
        scanf("%lf", &N_EXAME);
        printf("Nota do exame: %.1lf\n", N_EXAME);

        MEDIA_FINAL = (MEDIA_PONDERADA + N_EXAME) / 2;

        if (MEDIA_FINAL >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", MEDIA_FINAL);
        }
        else{
            
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", MEDIA_FINAL); 
        }
    }else{
        
        printf("Media: %.1lf\n", MEDIA_PONDERADA);
        printf("Aluno reprovado.\n");
    }

    return 0;
}