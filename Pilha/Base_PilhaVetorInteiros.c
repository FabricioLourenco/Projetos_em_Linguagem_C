
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef struct _pilha{//cria��o de uma struct tipo pilha
	int info[MAX];
	int topo;
}tp_pilha;

int cheia(tp_pilha *b){//Fun��o que testa se a pilha est� cheia

}
int vazia(tp_pilha *a){//Fun��o que testa se pilha est� vazia

}
void push(tp_pilha *a){//funcao que acrescenta elementos a pilha

}
void pop(tp_pilha *a){//funcao que extrai elementos da pilha

}
void display(tp_pilha *a){//funcao que mostra pilha

}
int main(){
	tp_pilha *p;
	int y,x;
	p=(tp_pilha*)malloc(sizeof(tp_pilha));
	p->topo=-1;
    do{
        printf("\nO que vc quer fazer com a pilha: Digite:\n\n 1=Inserir(push)\n 2=Retirar(pop)\n 3=Mostrar(display)\n 0=Sair\n\n");
        scanf("%d",&y);
        if(y==1){
            push(p);
        }else if(y==2){
            pop(p);
        }else if(y==3){
            display(p);
        }else if(y==0){
            break;
        }else{
            printf("Esta opcao e invalida!\n");
        }
    }while(y!=0);
     printf("\nVoce optou por sair do programa, as operacoes foram finalizadas\n");
}
