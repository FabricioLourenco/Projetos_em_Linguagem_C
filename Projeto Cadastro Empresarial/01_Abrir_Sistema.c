/*UNISENAI - CHAPECÓ.
ANÁLISE E DESENVOLVIMENTO DE SISTEMAS - MÓDULO 01.
ALUNOS: CLAINER HENRIQUE E FABRÍCIO BORGES LOURENÇO.
SISTEMA DE CADASTRO EMPRESARIAL - VERSÃO 00.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Adicionada para a função isdigit()
#define SALARIO_MINIMO 1320.0

typedef struct {
    char nomeCompleto[100];
    int identificacao;
    float salario;
} Funcionario;

float calcularReajuste(float salario, float percentual) {
    return salario * (1 + percentual / 100);
}

int verificarIdentificacao(Funcionario funcionarios[], int contador, int identificacao) {
    for (int i = 0; i < contador; i++) {
        if (funcionarios[i].identificacao == identificacao) {
            return 0; // Identificação já existe
        }
    }
    return 1; // Identificação não existe
}

int abrir(){

    Funcionario funcionarios[100];
    int contador = 0;
    char opcao;

    while (1) {
        
        printf("\n----- Menu -----\n");
        printf("\n1. Cadastrar funcionario\n");
        printf("2. Visualizar funcionarios cadastrados\n");
        printf("3. Reajuste de salario\n");
        printf("0. Sair e Reiniciar\n");
        printf("\nEscolha uma opcao: ");
        scanf(" %c", &opcao);

        if (opcao == '1') {
            
            printf("\n----- Cadastrar Funcionario -----\n");
            
            while (1) {
                
                printf("Nome completo: ");
                scanf(" %[^\n]s", funcionarios[contador].nomeCompleto);
                
                char primeiroCaractere = funcionarios[contador].nomeCompleto[0];
                if (isdigit(primeiroCaractere)){
                    printf("Nome invalido! O nome nao pode comecar com um numero. Digite novamente.\n\n");
                }
                else{
                    break;
                }
            }

            while (1) {
                
                printf("Identificacao: ");
                scanf("%d", &funcionarios[contador].identificacao);

                if (verificarIdentificacao(funcionarios, contador, funcionarios[contador].identificacao) == 0) {
                    printf("Identificacao ja existe. Digite uma identificacao diferente.\n\n");
                }
                else {
                    break;
                }
            }
            
            while (1) {
                
                printf("Salario: ");
                scanf("%f", &funcionarios[contador].salario);
                
                if (funcionarios[contador].salario >= SALARIO_MINIMO) {
                    break;
                }
                else {
                    printf("O salario informado e menor que o salario minimo de %.2f. Por favor, digite novamente.\n", SALARIO_MINIMO);
                }
            }
            
            contador++;
            
            printf("\nFuncionario cadastrado com sucesso!\n\n");

        }else if (opcao == '2') {
            
            printf("\n----- Funcionarios Cadastrados -----\n");
            
            for (int i = 0; i < contador; i++) {
                
                printf("Nome: %s\n", funcionarios[i].nomeCompleto);
                printf("Identificacao: %d\n", funcionarios[i].identificacao);
                printf("Salario: %.2f\n\n", funcionarios[i].salario);
                
            }

        }else if (opcao == '3') {
            
            printf("\n----- Reajuste de Salario -----\n");
            
            int identificacao;
            float percentual;
            int funcionarioEncontrado = 0;

            printf("Identificacao do funcionario: ");
            scanf("%d", &identificacao);

            for (int i = 0; i < contador; i++) {
                
                if (funcionarios[i].identificacao == identificacao) {
                    
                    funcionarioEncontrado = 1;

                    printf("Percentual de reajuste: ");
                    scanf("%f", &percentual);

                    funcionarios[i].salario = calcularReajuste(funcionarios[i].salario, percentual);

                    printf("Novo salario do funcionario: %.2f\n\n", funcionarios[i].salario);
                    break;
                }
            }

            if (!funcionarioEncontrado) {
                printf("Funcionario não encontrado!\n\n");
            }

        }else if (opcao == '0') {
            
            break;

        }else {
            
            printf("Opçao invalida! Digite novamente.\n\n");

        }
    }
    return 0;    
}

