#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#include "cabecalho.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");                            // Seta charset para PT-BR
    
    srand(time(NULL));                                          // Para números randomicos

    NoLista * quantidade = NULL;                                // Inicializa lista
    BST * arvore = NULL;                                        // Inicializa Árvore
    
    // A = quantidade de Ã¡rvores
    // N = quantidade de nÃ³s
    int A, N;                                                   // Variáveis

    limpaTela();                                                // Limpa tela

    do
    {
        limpaTela();

        printf("\tMenu\n"
                "1 - Quantidade de Árvores a serem criadas\n"
                "2 - Sair\n"
                "Escolha uma opção: ");
                scanf("%d%*c", &A);

        switch (A)
        {
            case 1:
                limpaTela();
                geraQtdArvore(&quantidade, A);
                break;
            case 2:
                limpaTela();
                break;
            default:
                limpaTela();
                printf("Opção inválida.\n");
        }
    } while (A != 2);
}
