#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int info;
    struct No *ant;
    struct No *prox;
} No;

No* inserirInicio(No *lista, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->info = valor;
    novo->ant = NULL;
    novo->prox = lista;

    if (lista != NULL) {
        lista->ant = novo;
    }

    return novo;
}

No* inserirFinal(No *lista, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->info = valor;
    novo->ant = NULL;
    novo->prox = NULL;

    if (lista == NULL) {
        return novo;
    }

    No *p = lista;
    while (p->prox != NULL) {
        p = p->prox;
    }

    p->prox = novo;
    novo->ant = p;

    return lista;
}

void imprimirDireta(No *lista) {
    No *p = lista;
    printf("Ordem direta: ");
    while (p != NULL) {
        printf("%d ", p->info);
        p = p->prox;
    }
    printf("\n");
}

void imprimirReversa(No *lista) {
    if (lista == NULL) {
        return;
    }

    No *p = lista;
    while (p->prox != NULL) {
        p = p->prox;
    }

    printf("Ordem inversa: ");
    while (p != NULL) {
        printf("%d ", p->info);
        p = p->ant;
    }
    printf("\n");
}

void liberarLista(No *lista) {
    No *p = lista;
    while (p != NULL) {
        No *temp = p->prox;
        free(p);
        p = temp;
    }
}

int main() {
    No *lista = NULL;

    lista = inserirFinal(lista, 20);
    lista = inserirFinal(lista, 30);
    lista = inserirInicio(lista, 10);
    lista = inserirFinal(lista, 40);

    imprimirDireta(lista);
    imprimirReversa(lista);

    liberarLista(lista);
    return 0;
}
