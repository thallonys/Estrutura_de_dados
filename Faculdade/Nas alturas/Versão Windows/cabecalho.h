#include <stdio.h>
#include <stdlib.h>

// Estrutura para árvore
typedef struct noBst {
    int raiz;
    struct noBst *esq, *dir;
} BST;

// Estruturas para lista ligada
typedef struct nolista {
    int qtd;
    BST *arvore;
    struct nolista *esq, *dir;
} NoLista;

typedef struct lista{
    NoLista *inicio;
    NoLista *fim;
} Lista;


// Protótipos
void limpaTela();
void geraQtdArvore(NoLista **quantidade, int a);
