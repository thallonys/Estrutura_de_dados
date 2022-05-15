#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no {
    char *chave;
    struct no *proximo;
    struct no *anterior;
} No;

typedef struct lista {
    No *inicio;
    No *fim;
} Lista;

void inserirPod(Lista ** lista, char nome[]);
// void mostrar();

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    Lista * inicio = NULL;
    char nome[64] = {0};
    int opcao = 0; 

    do
    {
        printf("\n\t\tMenu\n"
            "1 - Salvar Podcast\t"
            "2 - Mostrar Podcast\t"
            "3 - Sair\n");

        printf("Qual opùùo vocù deseja?\nDigite aqui: ");
        scanf("%d", &opcao);

            switch (opcao)
            {
                case 1:
                    printf("Informe o nome do PodCast a ser salvo: ");
                    fgets(nome, 64, stdin);
                    inserirPod(&inicio, nome);
                    break;
                case 2:
                    // mostrar();
                    break;
                default:
                    printf("Opùùo errada.\n");
                    break;
            }
    } while (opcao != 3);
}

void inserirPod(Lista ** inicio, char nome[])
{
    if(*inicio == NULL)
    {
        *inicio = malloc(sizeof(No));
        (*inicio)->inicio->chave = nome;
        (*inicio)->inicio->proximo = NULL;
        (*inicio)->inicio->proximo = NULL;

        Lista inicio = inicio;

    }
    else
    {
        printf("Erro ao alocar memùria.\n");
    }
}