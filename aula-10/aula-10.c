#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int info;
    struct No *prox;
} No;

No *inserirFinal(No *lista, int valor)
{

    No *novo = (No *)malloc(sizeof(No));
    novo->info = valor;

    if (lista == NULL)
    {
        novo->prox = novo;
        return novo;
    }

    No *p = lista;

    while (p->prox != lista)
    {
        p = p->prox;
    }

    p->prox = novo;
    novo->prox = lista;

    return lista;
}

void imprimir(No *lista)
{

    if (lista == NULL)
    {
        return;
    }

    No *p = lista;

    do
    {
        printf("%d ", p->info);
        p = p->prox;
    } while (p != lista);

    printf("\n");
}

int main()
{

    No *lista = NULL;

    lista = inserirFinal(lista, 10);
    lista = inserirFinal(lista, 20);
    lista = inserirFinal(lista, 30);
    lista = inserirFinal(lista, 40);

    printf("Lista circular:\n");
    imprimir(lista);

    return 0;
}
