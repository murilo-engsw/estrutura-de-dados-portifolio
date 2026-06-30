#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int info;
    struct No *prox;
} No;

typedef struct
{
    No *topo;
} Pilha;

Pilha *criarPilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void push(Pilha *p, int valor)
{

    No *novo = (No *)malloc(sizeof(No));

    novo->info = valor;
    novo->prox = p->topo;

    p->topo = novo;
}

int pop(Pilha *p)
{

    if (p->topo == NULL)
    {
        return -1;
    }

    No *aux = p->topo;
    int valor = aux->info;

    p->topo = aux->prox;
    free(aux);

    return valor;
}

void imprimir(Pilha *p)
{

    No *aux = p->topo;

    while (aux != NULL)
    {
        printf("%d\n", aux->info);
        aux = aux->prox;
    }
}

int main()
{

    Pilha *pilha = criarPilha();

    push(pilha, 10);
    push(pilha, 20);
    push(pilha, 30);

    printf("Pilha:\n");
    imprimir(pilha);

    printf("\nElemento removido: %d\n", pop(pilha));

    printf("\nPilha apos a remocao:\n");
    imprimir(pilha);

    return 0;
}
