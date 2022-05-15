#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#include "cabecalho.h"

void limpaTela()
{
    system("cls || clear");
}
void geraQtdArvore(NoLista ** quantidade, int a)
{
    srand(time(NULL));

    if(*quantidade == NULL)
    {
        for (int i; i < a; i++)
        {
            (*quantidade)->qtd = rand() % a + 1;
        }
    }

}