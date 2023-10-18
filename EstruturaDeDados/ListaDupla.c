#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//Cria uma struct contendo as informações do produto;
typedef struct produto{
	int codigo;
	char nome[20];
	float preco;
}tipo_produto;

//Cria uma struct contendo o modelo de nodo utilizado na aplicação, com apontamento para o next e para o prev;
typedef struct nodo{
	tipo_produto produto;
	struct nodo *next;
    struct nodo *prev;
}tipo_nodo;

//Cria uma struct para a sentinela , que armazana os ponteiros do nodo;
typedef struct lista{
	int nItens;
	struct nodo *first;
	struct nodo *last;
}tipo_lista;

//Inicializa a sentinela;
tipo_lista *inicializalista(){
	tipo_lista *novo=(tipo_lista*)malloc(sizeof(tipo_lista));
	novo->nItens=0;
	novo->first=NULL;
	novo->last=NULL;
	return novo;
}
//Função de inserção de nodos , ao qual a sentinela supervisiona a inserção;
tipo_lista *inserirLast(tipo_lista *ListaSentinela){

    tipo_nodo *novoNodo = (tipo_nodo*) malloc(sizeof(tipo_nodo));
	
	printf("\n===== INSERINDO ITEM =====\n");
	
	printf("\nDigite o codigo do produto: ");
	scanf("%d", &(novoNodo->produto.codigo));

	printf("Digite o nome do produto: ");
	scanf("%s", (novoNodo->produto.nome));

	printf("Digite o preco do produto: ");
	scanf("%f", &(novoNodo->produto.preco));

	if (ListaSentinela->nItens == 0){
        
        novoNodo->next = NULL;
        novoNodo->prev = NULL;
        ListaSentinela->last = novoNodo;
        ListaSentinela->first = novoNodo;
        ListaSentinela->nItens++;
    }else{

        ListaSentinela->last->next = novoNodo;
		novoNodo->next = NULL;
        novoNodo->prev = ListaSentinela->last;
        ListaSentinela->last = novoNodo;
        ListaSentinela->nItens++;		
    }	

	return ListaSentinela;
}

void visualisar(tipo_lista *ListaSentinela){

	tipo_nodo *i;	
	if (ListaSentinela->first != NULL){
		
		for (i = ListaSentinela->first; i != NULL; i = i->next){

		printf("\n===== PRODUTO =====\n");
		printf("Codigo: %d\nNome do produto: %s\nValor do produto: %.2f\n", (i->produto.codigo), (i->produto.nome), (i->produto.preco));		
		}
	}else{

		printf("\nA lista esta vazia!\n");
	}		
}

tipo_lista *remover(tipo_lista *ListaSentinela){
	
	if (ListaSentinela->first != NULL){

		int codigo = 0;

		tipo_nodo *nodoAtual;
		nodoAtual = ListaSentinela->first;
	
		printf("\n===== REMOVENDO ITEM =====\n");
		printf("\nDigite o codigo do produto: ");
		scanf("%d", &codigo);

		while ((nodoAtual->produto.codigo) != codigo){

			nodoAtual = nodoAtual->next;	
		}

		printf("\n===== PRODUTO =====\n");
		printf("Codigo: %d\nNome do produto: %s\nValor do produto: %.2f\n", (nodoAtual->produto.codigo), (nodoAtual->produto.nome), (nodoAtual->produto.preco));
		
				
		
		if (nodoAtual->prev == NULL && nodoAtual->next != NULL){

			ListaSentinela->first = ListaSentinela->first->next;
			ListaSentinela->first->prev=NULL;
			free(nodoAtual);

		}else if (nodoAtual->prev != NULL && nodoAtual->next == NULL){
			
			ListaSentinela->last = ListaSentinela->last->prev;
			ListaSentinela->last->next = NULL;
			free(nodoAtual);
			
		}else if (nodoAtual->prev != NULL && nodoAtual->next != NULL){
			
			nodoAtual->prev->next = nodoAtual->next;
			nodoAtual->next->prev = nodoAtual->prev;
			free(nodoAtual);

		}else if (nodoAtual->prev == NULL && nodoAtual->next == NULL){
			
			ListaSentinela->first = NULL;
			ListaSentinela->last = NULL;
			free(nodoAtual);                                           
		}
		
	}else{
		
		printf("\nA lista esta vazia!\n");

	}
	
	return ListaSentinela;
}

int main(){

	tipo_lista *ListaSentinela;
	ListaSentinela=inicializalista();

    int opcao;

	do{
        printf("\n===== LISTA DUPLAMENTE ENCADEADA =====\n\n");
		printf("Opcoes disponiveis:\n\n [1] = Inserir;\n [2] = Remover;\n [3] = Visualizar;\n [0] = Sair;\n\nDigite sua escolha: ");       
		scanf("%d",&opcao);

        if(opcao==1){

        	ListaSentinela = inserirLast(ListaSentinela);
        }
        else if(opcao==2){

        	ListaSentinela = remover(ListaSentinela);
        }
        else if(opcao==3){
			
        	visualisar(ListaSentinela);
        }else if(opcao==0){
			
            break;
        }else{

            printf("Esta opcao e invalida!\n");
        }
    }while(opcao!=0);
    
	printf("\nVoce optou por sair do programa, as operacoes foram finalizadas!\n");

}





    
