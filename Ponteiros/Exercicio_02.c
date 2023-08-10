#include <stdio.h>
#include <stdlib.h>

typedef struct{

    char nome[50];
    char endereco[100];
    int matricula;

}estudante;

int main(){

    int TAMANHO_VETOR, i;
    estudante *PONTEIRO_STRUCT;

    printf("\n\n!!!Preenchimento de Struct's!!!\n\n");

    printf("Digite o numero de posicoes do vetor para a Struct: ");
    scanf("%d", &TAMANHO_VETOR);

    PONTEIRO_STRUCT = (estudante*)malloc(sizeof(estudante)*TAMANHO_VETOR);

    for (i = 0; i < TAMANHO_VETOR; i++){

        printf("\nNO INDICE %d: \n", i);
        printf("Digite o seu nome: ");
        scanf("%s", (PONTEIRO_STRUCT+i)->nome);

        printf("NO INDICE %d: \n", i);
        printf("Digite o seu endereco: ");
        scanf("%s", (PONTEIRO_STRUCT+i)->endereco);

        printf("NO INDICE %d: \n", i);
        printf("Digite a sua matricula: ");
        scanf("%d", &(PONTEIRO_STRUCT+i)->matricula);
    }

    printf("\n\n\n******ARMAZENADO*****\n\n\n");

    for (i = 0; i < TAMANHO_VETOR; i++){

        printf("NO INDICE %d: \n", i);
        printf("O nome armazenado corresponde-a: %s\n", (PONTEIRO_STRUCT+i)->nome);

        printf("NO INDICE %d: \n", i);
        printf("O endereco armazenado corresponde-a: %s\n", (PONTEIRO_STRUCT+i)->endereco);

        printf("NO INDICE %d: \n", i);
        printf("A Matricula armazenada corresponde-a: %d\n\n\n", (PONTEIRO_STRUCT+i)->matricula);
        
    }        
    return 0;
}