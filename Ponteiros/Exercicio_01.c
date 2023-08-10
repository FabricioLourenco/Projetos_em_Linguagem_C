#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int TAMANHO_VETOR, i;
    int *PONTEIRO;

    printf("\n\n!!!Preenchimento de vetor!!!\n\n");

    printf("Digite o numero de posicoes do vetor: ");
    scanf("%d", &TAMANHO_VETOR);

    PONTEIRO = (int*)malloc(sizeof(int)*TAMANHO_VETOR);

    for (i = 0; i < TAMANHO_VETOR; i++){

        printf("Digite o conteudo do endereco de memoria %p, no indice %d: ", (PONTEIRO+i), i);
        scanf("%d", (PONTEIRO+i));
    }

    printf("\nAbaixo o conteudo adicionado ao vetor: \n\n");

    for (i = 0; i < TAMANHO_VETOR; i++){

        printf("O conteudo do endereco de memoria %p, no indice %d, do vetor corresponde-a: %d\n", (PONTEIRO+i),i, *(PONTEIRO+i));      
    }

    return 0;
}