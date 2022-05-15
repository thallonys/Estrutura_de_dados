#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no {
    int key;
    int h; // altura
    struct no * left, * right;
} BST;

void limpaTela();
void insert(BST ** tree, int value);
void imprimir(BST * tree);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    BST * tree = NULL;

    int value = 0, option = 0;

    limpaTela();

    while(option != 3)
    {
        limpaTela();

        printf("\tMenu\n"
                "1 - Inserir número\n"
                "2 - Mostrar árvore\n"
                "3 - Sair\n\n"
                "Escolha uma das opções acima: ");
                scanf("%d%*c", &option);

        switch (option)
        {
            case 1:
                limpaTela();

                printf("Escolha um número para ser inserido na árvore: ");
                scanf("%d%*c", &value);

                insert(&tree, value);

                break;
            case 2:
                limpaTela();
                imprimir(tree);
                printf("\n\nPara continuar tecle ENTER...");
                getchar();

                break;
            case 3:
                limpaTela();
                break;
            default:
                limpaTela();

                printf("Opção inválida.\n");

                break;
        }             
    }
    return 0;
}
void limpaTela()
{
    system("cls || clear");
}

void insert(BST ** tree, int value)
{
    if (*tree == NULL)
    {
        *tree = malloc(sizeof(BST));
        (*tree)->key = value;
        (*tree)->left = (*tree)->right = NULL;
    }
    else if (value < (*tree)->key)
    {   
        insert((&(*tree)->left), value);
    }
    else
    {
        insert(&((*tree)->right), value);
    }      
}

void imprimir(BST * tree)
{
    if(tree)
    {
        imprimir(tree->left);
        printf("%d ", tree->key);
        imprimir(tree->right);
    }
}