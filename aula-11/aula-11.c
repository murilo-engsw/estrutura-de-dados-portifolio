#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int info;
    struct No *ant;
    struct No *prox;
} No;

No *inserirFinal(No *lista, int valor)
{

    No *novo = (No *)malloc(sizeof(No));

    novo->info = valor;
    novo->ant = NULL;
    novo->prox = NULL;

    if (lista == NULL)
    {
        return novo;
    }

    No *p = lista;

    while (p->prox != NULL)
    {
        p = p->prox;
    }

    p->prox = novo;
    novo->ant = p;

    return lista;
}

void imprimir(No *lista)
{

    No *p = lista;

    printf("Ordem direta: ");

    while (p != NULL)
    {
        printf("%d ", p->info);

        if (p->prox == NULL)
            break;

        p = p->prox;
    }

    printf("\nOrdem inversa: ");

    while (p != NULL)
    {
        printf("%d ", p->info);
        p = p->ant;
    }

    printf("\n");
}

int main()
{

    No *lista = NULL;

    lista = inserirFinal(lista, 10);
    lista = inserirFinal(lista, 20);
    lista = inserirFinal(lista, 30);
    lista = inserirFinal(lista, 40);

    imprimir(lista);

    return 0;
}
