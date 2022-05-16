#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "cabecalho.h"

/*
Para o uso do setlocale, deve-se alterar a configura��o do charset nas IDEs no (Ru)Windows manualmente para ISO 8859-1.
Se o Linux for utilizado, n�o precisa fazer tal altera��o.
No mac, idem.
*/


int main()
{
    // setlocale(LC_ALL, "Portuguese");                            // Seta charset para PT-BR.

    srand(time(NULL));                                          // Para n�meros randomicos.

    NoLista * quantidade = NULL;                                // Inicializa lista.
    BST * arvore = NULL;                                        // Inicializa �rvore.

    // A = quantidade de �rvores.
    // N = quantidade de n�s.
    int A, N;                                                   // Vari�veis.

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
                printf("Op��o inv�lida.\n");
        }
    } while (A != 2);
}
