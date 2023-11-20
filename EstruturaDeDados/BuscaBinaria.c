#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int busca_binaria(int *vetor, int tamanho, int item) {
  
  int inicio = 0;
  int fim = tamanho - 1;
  int meio;

  while (inicio <= fim) {
    meio = (inicio + fim) / 2;

    if (vetor[meio] == item) {
      return meio;
    } else if (vetor[meio] < item) {
      inicio = meio + 1;
    } else {
      fim = meio - 1;
    }
  }
  return -1;
}

int main(){

	int v[10];
    int i;
    int opcao;
	int item;

	do{
        printf("\n===== Busca Binaria =====\n\n");
		printf("Opcoes disponiveis:\n\n [1] = Inserir dados;\n [2] = Visualizar dados;\n [3] = Encontrar Dados via busca Binaria;\n [0] = Sair;\n\nDigite sua escolha: ");       
		scanf("%d",&opcao);

        if(opcao==1){

			for (i = 0; i < 10; i++){ 
        		printf("Insira um dado:");
        		scanf("%d", &v[i]);
    		}        	
        }
        else if(opcao==2){

        	printf("Dados inseridos:\n\n");
    		for (i = 0; i < 10; i++){ 
        		printf("%d\n", v[i]);
    		}
        }
        else if(opcao==3){
			
			printf("Insira o dado que deseja encontrar:");
			scanf("%d", &item);
			
			int indice = busca_binaria(v, 10, item);

  			if (indice != -1) {
    		printf("\nO item %d foi encontrado na posicao %d\n", item, indice);
  			} else {
    		printf("\nO item %d nao foi encontrado\n", item);
  			}	
        	
        }else if(opcao==0){			
            break;
        }else{
            printf("Esta opcao e invalida!\n");
        }
    }while(opcao!=0);
    
	printf("\nVoce optou por sair do programa, as operacoes foram finalizadas!\n");

	return 0;
}