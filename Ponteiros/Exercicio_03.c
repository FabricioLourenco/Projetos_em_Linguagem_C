#include <stdio.h>
#include <stdlib.h>

int* uniao(int *v1, int n1, int *v2, int n2){

    int TAMANHO_VETOR_03 = n1 + n2, i;
    int *PONTEIRO_03;

    PONTEIRO_03 = (int*)malloc(sizeof(int)*TAMANHO_VETOR_03);

    for (i = 0; i < n1; i++){
        
        *(PONTEIRO_03 + i) = *(v1+i);   
    }
        
    for (i = 0; i < n2; i++){
        
        *(PONTEIRO_03+(n1+i)) = *(v2+i);
    }   

    return PONTEIRO_03;

}

int main(){
    
    int TAMANHO_VETOR_01,TAMANHO_VETOR_02, i;
    int *PONTEIRO_01, *PONTEIRO_02, *PONTEIRO_03;

    printf("\n\n!!!Concatenacao de vetores!!!\n\n");
    
    printf("Digite o numero de posicoes do primeiro vetor: ");
    scanf("%d", &TAMANHO_VETOR_01);
    PONTEIRO_01 = (int*)malloc(sizeof(int)*TAMANHO_VETOR_01);
    for (i = 0; i < TAMANHO_VETOR_01; i++){

        printf("Digite o conteudo do endereco de memoria %p, no indice %d, do primeiro vetor: ", (PONTEIRO_01+i), i);
        scanf("%d", (PONTEIRO_01+i));
    }

    printf("\nDigite o numero de posicoes do segundo vetor: ");
    scanf("%d", &TAMANHO_VETOR_02);
    PONTEIRO_02 = (int*)malloc(sizeof(int)*TAMANHO_VETOR_02);
    for (i = 0; i < TAMANHO_VETOR_02; i++){

        printf("Digite o conteudo do endereco de memoria %p, no indice %d, do segundo vetor: ", (PONTEIRO_02+i), i);
        scanf("%d", (PONTEIRO_02+i));
    }

    PONTEIRO_03 = uniao(PONTEIRO_01, TAMANHO_VETOR_01, PONTEIRO_02, TAMANHO_VETOR_02);

    free(PONTEIRO_01);
    free(PONTEIRO_02);

    printf("\nAbaixo o conteudo do terceiro vetor: \n\n");
    
    for (i = 0; i <(TAMANHO_VETOR_01 + TAMANHO_VETOR_02); i++){

        printf("O conteudo do endereco de memoria %p, no indice %d, do terceiro vetor corresponde-a: %d \n", (PONTEIRO_03+i), i, *(PONTEIRO_03+i));
    }
        
    free(PONTEIRO_03);

    return 0;
}