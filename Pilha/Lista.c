#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 50

typedef struct produto{
	int codigo;
	char nome[TAM];
	float preco;
}tipo_produto;

typedef struct nodo{
	tipo_produto produto;
	struct nodo *prox;
}tipo_nodo;

tipo_nodo* inserir(tipo_nodo *ponteiroLista){

	tipo_nodo *novoNodo = (tipo_nodo*) malloc(sizeof(tipo_nodo));
	
	printf("\n===== INSERINDO ITEM =====\n");
	
	printf("\nDigite o codigo do produto: ");
	scanf("%d", &(novoNodo->produto.codigo));
	
	printf("Digite o nome do produto: ");
	scanf("%s", (novoNodo->produto.nome));

	printf("Digite o preco do produto: ");
	scanf("%f", &(novoNodo->produto.preco));

	novoNodo->prox = ponteiroLista;

	return novoNodo;
}

tipo_nodo* remover(tipo_nodo *ponteiroLista){

	int codigo = 0;
	printf("\n===== REMOVENDO ITEM =====\n");
	printf("\nDigite o codigo do produto: ");
	scanf("%d", &codigo);
	
	tipo_nodo* remover = NULL;
	tipo_nodo* atual = ponteiroLista;
	
	while (atual != NULL && (atual->produto.codigo) != codigo){

		remover = atual;
		atual = atual->prox;
	}
	if (atual == NULL){

		return ponteiroLista;
	}
	if (remover == NULL){

		ponteiroLista = atual->prox;
	}else{

		remover->prox = atual->prox;
	}

	return remover;
}

void visualisar(tipo_nodo *ponteiroLista){

	tipo_nodo *i;	

	for (i = ponteiroLista; i != NULL; i = i->prox){

		printf("\n===== PRODUTO =====\n");
		printf("O codigo e: %d\nO nome do produto e: %s\nO valor do produto e: %.2f\n", (i->produto.codigo), (i->produto.nome), (i->produto.preco));		
	}
}

int main(){

	tipo_nodo *ponteiroLista = NULL;
	
	int opcao;

	do{
        printf("\n===== ALOCACAO EM LISTA =====\n\n");
		printf("Opcoes disponiveis:\n\n [1] = Inserir;\n [2] = Remover;\n [3] = Visualizar;\n [0] = Sair;\n\nDigite sua escolha: ");       
		scanf("%d",&opcao);

        if(opcao==1){

           ponteiroLista = inserir(ponteiroLista);

        }else if(opcao==2){

            remover(ponteiroLista);
        }else if(opcao==3){

            visualisar(ponteiroLista);
        }else if(opcao==0){
			
            break;
        }else{

            printf("Esta opcao e invalida!\n");
        }
    }while(opcao!=0);
    
	printf("\nVoce optou por sair do programa, as operacoes foram finalizadas\n");

}



    
