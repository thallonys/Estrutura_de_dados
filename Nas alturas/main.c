#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#include "cabecalho.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");                            // Seta charset para PT-BR
    
    srand(time(NULL));                                          // Para n�meros randomicos

    NoLista * quantidade = NULL;                                // Inicializa lista
    BST * arvore = NULL;                                        // Inicializa �rvore
    
    // A = quantidade de árvores
    // N = quantidade de nós
    int A, N;                                                   // Vari�veis

    limpaTela();                                                // Limpa tela

    do
    {
        limpaTela();

        printf("\tMenu\n"
                "1 - Quantidade de �rvores a serem criadas\n"
                "2 - Sair\n"
                "Escolha uma op��o: ");
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
                printf("Op��o inv�lida.\n");
        }
    } while (A != 2);
}
