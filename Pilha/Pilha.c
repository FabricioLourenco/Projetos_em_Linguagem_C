#include <stdio.h>
#include <stdlib.h>
#define MAX 4

typedef struct _pilha{
	int dados[MAX];
	int topo;
}tipo_pilha;

int cheia(tipo_pilha *ponteiro){

	if (ponteiro->topo == (MAX-1)){		

		printf("\nA pilha esta cheia!!!\n");	
	}else{

		return 1;
	}
}
int vazia(tipo_pilha *ponteiro){

	if (ponteiro->topo == (-1)){		

		printf("\nA pilha esta vazia!!!\n");		
	}else{
		
		return 1;
	}
}
void push(tipo_pilha *ponteiro){

	if (cheia(ponteiro) == 1){

		ponteiro->topo++;
		printf("Para a posicao %d da pilha, digite um valor: ", (ponteiro->topo));
		scanf("%d", (ponteiro->dados + ponteiro->topo));				
	}	
}
void pop(tipo_pilha *ponteiro){

	if (vazia(ponteiro) == 1){

		printf("Apos retirar o elemento %d, da posicao %d, o topo voltou a estar na posicao %d e o elemento atual e: %d\n", *(ponteiro->dados+(ponteiro->topo+1)), (ponteiro->topo+1) , ponteiro->topo, *(ponteiro->dados+ponteiro->topo));	
		ponteiro->topo--;					
	}
}
void display(tipo_pilha *ponteiro){

	int i;	
	for (i = ponteiro->topo; i >= 0 ; i--){

		printf("O elemento na posicao %d da pila e: %d\n", i,*(ponteiro->dados+i)); 		
	}
}
int main(){

	tipo_pilha *ponteiro;
	ponteiro =(tipo_pilha*)malloc(sizeof(tipo_pilha));
	ponteiro->topo = -1;
	int opcao;

	do{
        printf("\n=====ALOCACAO EM PILHA=====\n\n");
		printf("Opcoes disponiveis:\n\n [1] = Inserir(push);\n [2] = Retirar(pop);\n [3] = Mostrar(display);\n [0] = Sair;\n\nDigite sua escolha: ");       
		scanf("%d",&opcao);

        if(opcao==1){

            push(ponteiro);
        }else if(opcao==2){

            pop(ponteiro);
        }else if(opcao==3){

            display(ponteiro);
        }else if(opcao==0){
			
            break;
        }else{

            printf("Esta opcao e invalida!\n");
        }
    }while(opcao!=0);
    
	printf("\nVoce optou por sair do programa, as operacoes foram finalizadas\n");

	free(ponteiro);
    return 0;
}