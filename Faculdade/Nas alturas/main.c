#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "cabecalho.h"

/*
Para o uso do setlocale, deve-se alterar a configuração do charset nas IDEs no (Ru)Windows manualmente para ISO 8859-1.
Se o Linux for utilizado, não precisa fazer tal alteração.
No mac, idem.
*/


int main()
{
    setlocale(LC_ALL, "Portuguese");                            // Seta charset para PT-BR.

    srand(time(NULL));                                          // Para números randomicos.

    NoLista * quantidade = NULL;                                // Inicializa lista.
    BST * arvore = NULL;                                        // Inicializa árvore.

    // A = quantidade de árvores.
    // N = quantidade de nós.
    int A, N;                                                   // Variáveis.

    limpaTela();                                                // Limpa tela.

    do
    {
        limpaTela();

        printf("|LinkedList&BST*******************|23|Maio|2022|\n"
                "|--------------------OPÇÕES--------------------|\n"
                "|**********************************************|\n"
                "|* 1 - Quantidade de árvores a serem criadas. *|\n"
                "|* 0 - Quantidade de nós a serem inseridos.   *|\n"
                "|* 2 - Sair.                                  *|\n"
                "|----------------------------------------------|\n"
                "|**********************************************|\n"
                "|----------------------------------------------|\n"
                "|************ Escolha uma das acima exibidas: ");
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
