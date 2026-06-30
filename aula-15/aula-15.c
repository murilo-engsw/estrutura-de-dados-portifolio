#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *esq;
    struct No *dir;
} No;

No *inserir(No *raiz, int valor)
{

    if (raiz == NULL)
    {

        No *novo = (No *)malloc(sizeof(No));

        novo->valor = valor;
        novo->esq = NULL;
        novo->dir = NULL;

        return novo;
    }

    if (valor < raiz->valor)
    {
        raiz->esq = inserir(raiz->esq, valor);
    }
    else if (valor > raiz->valor)
    {
        raiz->dir = inserir(raiz->dir, valor);
    }

    return raiz;
}

void emOrdem(No *raiz)
{

    if (raiz != NULL)
    {
        emOrdem(raiz->esq);
        printf("%d ", raiz->valor);
        emOrdem(raiz->dir);
    }
}

int main()
{

    No *raiz = NULL;

    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    printf("Percurso em ordem:\n");
    emOrdem(raiz);

    return 0;
}
