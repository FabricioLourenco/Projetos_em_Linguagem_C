#include <stdio.h>

int main(){
    
    int N, NUMERO, i, x, soma = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%d", &NUMERO);
        for (x = 1; x < NUMERO; x++){
            if (NUMERO%x == 0){
                soma += x;
            }  
        }
        if (soma == NUMERO)
        {
            printf("%d eh perfeito\n", NUMERO);
        }else{
            printf("%d nao eh perfeito\n", NUMERO);
        }
        soma=0;    
    }    
    return  0;
}
