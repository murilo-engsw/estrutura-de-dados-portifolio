#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int info;
    struct No *prox;
} No;

No *inserir(No *lista, int valor)
{

    No *novo = (No *)malloc(sizeof(No));

    novo->info = valor;
    novo->prox = lista;

    return novo;
}

void imprimir(No *lista)
{

    No *p = lista;

    while (p != NULL)
    {
        printf("%d ", p->info);
        p = p->prox;
    }

    printf("\n");
}

int main()
{

    No *lista = NULL;

    lista = inserir(lista, 10);
    lista = inserir(lista, 20);
    lista = inserir(lista, 30);

    printf("Elementos da lista:\n");
    imprimir(lista);

    return 0;
}
