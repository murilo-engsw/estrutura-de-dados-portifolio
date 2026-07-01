#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *esq;
    struct No *dir;
} No;

No* inserir(No *raiz, int valor) {
    if (raiz == NULL) {
        No *novo = (No*) malloc(sizeof(No));
        novo->valor = valor;
        novo->esq = NULL;
        novo->dir = NULL;
        return novo;
    }
    
    if (valor < raiz->valor) {
        raiz->esq = inserir(raiz->esq, valor);
    } else if (valor > raiz->valor) {
        raiz->dir = inserir(raiz->dir, valor);
    }
    
    return raiz;
}

No* buscar(No *raiz, int valor) {
    if (raiz == NULL || raiz->valor == valor) {
        return raiz;
    }
    
    if (valor < raiz->valor) {
        return buscar(raiz->esq, valor);
    }
    
    return buscar(raiz->dir, valor);
}

No* encontrarMinimo(No *raiz) {
    No *atual = raiz;
    while (atual && atual->esq != NULL) {
        atual = atual->esq;
    }
    return atual;
}

No* remover(No *raiz, int valor) {
    if (raiz == NULL) return raiz;

    if (valor < raiz->valor) {
        raiz->esq = remover(raiz->esq, valor);
    } else if (valor > raiz->valor) {
        raiz->dir = remover(raiz->dir, valor);
    } else {
        if (raiz->esq == NULL) {
            No *temp = raiz->dir;
            free(raiz);
            return temp;
        } else if (raiz->dir == NULL) {
            No *temp = raiz->esq;
            free(raiz);
            return temp;
        }
        
        No *temp = encontrarMinimo(raiz->dir);
        raiz->valor = temp->valor;
        raiz->dir = remover(raiz->dir, temp->valor);
    }
    return raiz;
}

void emOrdem(No *raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esq);
        printf("%d ", raiz->valor);
        emOrdem(raiz->dir);
    }
}

int main() {
    No *raiz = NULL;

    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    printf("--- Propriedade de Ordenacao (Percurso In-Order) ---\n");
    printf("Elementos: ");
    emOrdem(raiz);
    printf("\n\n");

    printf("--- Algoritmo de Busca ---\n");
    int valorBusca = 40;
    No *resultado = buscar(raiz, valorBusca);
    if (resultado != NULL) {
        printf("Valor %d encontrado na BST (Descartando subarvores a cada passo).\n\n", valorBusca);
    } else {
        printf("Valor %d nao encontrado.\n\n", valorBusca);
    }

    printf("--- Operacao de Remocao ---\n");
    printf("Removendo o valor 30 (no com dois filhos)...\n");
    raiz = remover(raiz, 30);
    printf("Arvore atualizada: ");
    emOrdem(raiz);
    printf("\n\n");

    printf("--- Desafio do Desbalanceamento ---\n");
    printf("Nota teorica: Se elementos fossem inseridos sequencialmente (ex: 1, 2, 3, 4),\n");
    printf("a BST se comportaria como uma lista encadeada, degradando a performance para O(n).\n");
    printf("Solucao: Utilizacao de arvores auto-balanceaveis como AVL ou Rubro-Negra.\n");

    return 0;
}
