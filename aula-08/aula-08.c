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

No *removerUltimo(No *lista)
{
    if (lista == NULL)
    {
        return NULL;
    }

    if (lista->prox == NULL)
    {
        free(lista);
        return NULL;
    }

    No *atual = lista;
    No *anterior = NULL;

    while (atual->prox != NULL)
    {
        anterior = atual;
        atual = atual->prox;
    }

    anterior->prox = NULL;
    free(atual);

    return lista;
}

void liberarLista(No *lista)
{
    No *p = lista;
    while (p != NULL)
    {
        No *temp = p->prox;
        free(p);
        p = temp;
    }
}

void imprimir(No *lista)
{
    No *p = lista;
    while (p != NULL)
    {
        printf("%d -> ", p->info);
        p = p->prox;
    }
    printf("NULL\n");
}

int main()
{
    No *lista = NULL;

    lista = inserir(lista, 10);
    lista = inserir(lista, 20);
    lista = inserir(lista, 30);

    printf("Lista original:\n");
    imprimir(lista);

    int valor = 20;
    No *resultado = buscar(lista, valor);

    if (resultado != NULL)
    {
        printf("\nValor %d encontrado na lista.\n", valor);
    }
    else
    {
        printf("\nValor %d nao encontrado.\n", valor);
    }

    lista = removerUltimo(lista);
    printf("\nLista apos a remocao do ultimo elemento:\n");
    imprimir(lista);

    liberarLista(lista);
    lista = NULL;
    printf("\nMemoria da lista liberada com sucesso.\n");

    return 0;
}
