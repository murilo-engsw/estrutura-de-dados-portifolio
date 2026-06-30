#include <stdio.h>

#define MAX 5

typedef struct
{
    int dados[MAX];
    int frente;
    int fim;
} Fila;

void inicializar(Fila *f)
{
    f->frente = 0;
    f->fim = -1;
}

int vazia(Fila *f)
{
    return f->fim < f->frente;
}

void enqueue(Fila *f, int valor)
{

    if (f->fim == MAX - 1)
    {
        printf("Fila cheia!\n");
        return;
    }

    f->fim++;
    f->dados[f->fim] = valor;
}

int dequeue(Fila *f)
{

    if (vazia(f))
    {
        printf("Fila vazia!\n");
        return -1;
    }

    return f->dados[f->frente++];
}

void imprimir(Fila *f)
{

    for (int i = f->frente; i <= f->fim; i++)
    {
        printf("%d ", f->dados[i]);
    }

    printf("\n");
}

int main()
{

    Fila fila;

    inicializar(&fila);

    enqueue(&fila, 10);
    enqueue(&fila, 20);
    enqueue(&fila, 30);

    printf("Fila:\n");
    imprimir(&fila);

    printf("\nElemento removido: %d\n", dequeue(&fila));

    printf("\nFila apos a remocao:\n");
    imprimir(&fila);

    return 0;
}
