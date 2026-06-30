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

No *remover(No *lista, int valor)
{

    No *atual = lista;
    No *anterior = NULL;

    while (atual != NULL && atual->info != valor)
    {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL)
    {
        return lista;
    }

    if (anterior == NULL)
    {
        lista = atual->prox;
    }
    else
    {
        anterior->prox = atual->prox;
    }

    free(atual);

    return lista;
}

void imprimir(No *lista)
{

    while (lista != NULL)
    {
        printf("%d ", lista->info);
        lista = lista->prox;
    }

    printf("\n");
}

int main()
{

    No *lista = NULL;

    lista = inserir(lista, 10);
    lista = inserir(lista, 20);
    lista = inserir(lista, 30);
    lista = inserir(lista, 40);

    int valor;

    printf("Digite o valor que deseja remover: ");
    scanf("%d", &valor);

    lista = remover(lista, valor);

    printf("\nLista apos a remocao:\n");
    imprimir(lista);

    return 0;
}
