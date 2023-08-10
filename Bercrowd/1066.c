#include <stdio.h>

int main(){

    int i, NUMEROS[5], POSITIVO = 0, NEGATIVO = 0, IMPAR = 0, PAR = 0;
    

    for (i = 0; i < 5; i++){
        
        scanf("%d", &NUMEROS[i]);
   
        if (NUMEROS[i] > 0){
           
           POSITIVO+=1;

        }
        if (NUMEROS[i] < 0){
            
            NEGATIVO+=1;
        
        }
        if (NUMEROS[i]% 2 == 0){
           
           PAR+=1;  
        
        }
        if (NUMEROS[i]% 2 != 0){
           
           IMPAR+=1; 
        }
    } 
   
    printf("%d valor(es) par(es)\n", PAR);
    printf("%d valor(es) impar(es)\n", IMPAR);
    printf("%d valor(es) positivo(s)\n", POSITIVO);
    printf("%d valor(es) negativo(s)\n", NEGATIVO);
    
    return 0;
}