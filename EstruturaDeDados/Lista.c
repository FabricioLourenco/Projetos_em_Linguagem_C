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

tipo_nodo *inserir(tipo_nodo *ponteiroLista){

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

	if (ponteiroLista != NULL){
		
		int codigo = 0;
		int excluido = 0;
		printf("\n===== REMOVENDO ITEM =====\n");
		printf("\nDigite o codigo do produto: ");
		scanf("%d", &codigo);
	
		tipo_nodo* anterior = NULL;
		tipo_nodo* atual = ponteiroLista;
	
		while (atual != NULL && (atual->produto.codigo) != codigo){

			anterior = atual;
			atual = atual->prox;
		}
		if (atual == NULL){

			printf("\nO elemento nao foi encontrado!\n");
			return ponteiroLista;
		}
		if (anterior == NULL){
						
			ponteiroLista = atual->prox;			
		}else{
			
			anterior->prox = atual->prox;
		}	
		return ponteiroLista;
	}else{
		printf("\nA lista esta vazia!\n");
	}	
}

void visualisar(tipo_nodo *ponteiroLista){

	tipo_nodo *i;	
	if (ponteiroLista != NULL){
		
		for (i = ponteiroLista; i != NULL; i = i->prox){

		printf("\n===== PRODUTO =====\n");
		printf("Codigo: %d\nNome do produto: %s\nValor do produto: %.2f\n", (i->produto.codigo), (i->produto.nome), (i->produto.preco));		
		}
	}else{

		printf("\nA lista esta vazia!\n");
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

        	ponteiroLista = remover(ponteiroLista);
        }else if(opcao==3){

        	visualisar(ponteiroLista);
        }else if(opcao==0){
			
            break;
        }else{

            printf("Esta opcao e invalida!\n");
        }
    }while(opcao!=0);
    
	printf("\nVoce optou por sair do programa, as operacoes foram finalizadas!\n");

}



    
