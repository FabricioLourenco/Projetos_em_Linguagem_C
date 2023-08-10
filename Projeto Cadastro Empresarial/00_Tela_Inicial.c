/*UNISENAI - CHAPECÓ.
ANÁLISE E DESENVOLVIMENTO DE SISTEMAS - MÓDULO 01.
ALUNOS: CLAINER HENRIQUE E FABRÍCIO BORGES LOURENÇO.
SISTEMA DE CADASTRO EMPRESARIAL - VERSÃO 00.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "01_Abrir_Sistema.c"
#include "02_Fechar_Sistema.c"

int main(){
    
    int Seletor = 0;
    
    while (Seletor != 3){

        printf("\nBem vindo ao Sistema de Consulta e Cadastro de Funcionarios V.00!\n\n");
        printf("Escolha uma das opcoes para prosseguir!\n\n");
        printf("1 - Abrir Sistema.\n");
        printf("2 - Reiniciar Sistema.\n");
        printf("3 - Fechar Sistema.\n\n");

        printf("Digite a opcao deseja: ");
        scanf("%d", &Seletor);
        
        switch (Seletor){

            case 1:
        
                abrir();
                Seletor = 2;
    
            case 2:

                printf("\n!!!   PROGRAMA REINICIADO.   !!!\n");        
                break;

            case 3:

                fechar();
                break;    
    
            default:

                printf("\n!!!   VALOR INVALIDO, ESCOLHA NOVAMENTE.   !!!\n\n\n");

            break;
        }    
    } 
    return 0;
}