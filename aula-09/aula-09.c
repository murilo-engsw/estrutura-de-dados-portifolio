#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int info;
    struct No *prox;
} No;

No* inserir(No *lista, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->info = valor;
    novo->prox = lista;
    return novo;
}

No* removerInicio(No *lista) {
    if (lista == NULL) {
        return NULL;
    }
    No *temp = lista;
    lista = lista->prox;
    free(temp);
    return lista;
}

No* removerPorValor(No *lista, int valor) {
    No *atual = lista;
    No *anterior = NULL;

    while (atual != NULL && atual->info != valor) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        return lista;
    }

    if (anterior == NULL) {
        lista = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    free(atual);
    return lista;
}

No* removerPorPosicao(No *lista, int posicao) {
    if (lista == NULL) {
        return NULL;
    }

    No *atual = lista;
    No *anterior = NULL;

    if (posicao == 0) {
        lista = atual->prox;
        free(atual);
        return lista;
    }

    int i = 0;
    while (atual != NULL && i < posicao) {
        anterior = atual;
        atual = atual->prox;
        i++;
    }

    if (atual == NULL) {
        return lista;
    }

    anterior->prox = atual->prox;
    free(atual);
    return lista;
}

void imprimir(No *lista) {
    No *p = lista;
    while (p != NULL) {
        printf("%d -> ", p->info);
        p = p->prox;
    }
    printf("NULL\n");
}

int main() {
    No *lista = NULL;

    lista = inserir(lista, 50);
    lista = inserir(lista, 40);
    lista = inserir(lista, 30);
    lista = inserir(lista, 20);
    lista = inserir(lista, 10);

    printf("Lista original:\n");
    imprimir(lista);

    printf("\nApos remocao do inicio:\n");
    lista = removerInicio(lista);
    imprimir(lista);

    printf("\nApos remocao por valor (ex: 40):\n");
    lista = removerPorValor(lista, 40);
    imprimir(lista);

    printf("\nApos remocao por posicao (ex: indice 1):\n");
    lista = removerPorPosicao(lista, 1);
    imprimir(lista);

    return 0;
}
