#include <stdio.h>

int main(){

    int i, V[10], SOMA = 0;

    for (i = 0; i < 10; i++){

        printf("Digite um valor: ");
        scanf("%d", &V[i]);        
        if(V[i]%2 != 0){

            SOMA += V[i];
        }
    }
    printf("A soma dos numeros impares: %d\n", SOMA);
    return 0;
}