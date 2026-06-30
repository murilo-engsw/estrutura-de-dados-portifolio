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

No *buscar(No *lista, int valor)
{

    No *p = lista;

    while (p != NULL)
    {

        if (p->info == valor)
        {
            return p;
        }

        p = p->prox;
    }

    return NULL;
}

int main()
{

    No *lista = NULL;

    lista = inserir(lista, 10);
    lista = inserir(lista, 20);
    lista = inserir(lista, 30);

    int valor = 20;

    No *resultado = buscar(lista, valor);

    if (resultado != NULL)
    {
        printf("Valor %d encontrado na lista.\n", valor);
    }
    else
    {
        printf("Valor %d nao encontrado.\n", valor);
    }

    return 0;
}
