#include <stdio.h>

#define MAX 12345

// funcao deve retornar o tamanho da palavra passada por parâmetro; lembrando que em C o final de uma string é dado pelo caractere \0
int tamanho_palavra(char palavra[MAX]){

    int i, TAM = 0;
    
    for (i = 0; palavra[i] != '\0' ; i++){

        TAM++;           
    } 

    return TAM;   
}

// funcao deve retornar 1 se a variável palavra é um palíndromo ou 0 caso contrário
int e_palindromo(char palavra[MAX]){

    int i, y = tamanho_palavra(palavra);
    
    for (i = 0; i < y; i++){
        
        if (palavra[i] != palavra[y-1]){

            return 0;
        }else{
           y-- ;
        }        
    }

    return 1;   

}

int main(){
    char palavra[MAX];
    printf("Digite uma palavra\n");
    scanf("%s", palavra);

    printf("A palavra tem tamanho %d\n", tamanho_palavra(palavra));
    if (e_palindromo(palavra)) {
        printf("A palavra é um palindromo!\n");
    } else {
        printf("A palavra não é um palindromo!\n");
    }

    return 0;
}
