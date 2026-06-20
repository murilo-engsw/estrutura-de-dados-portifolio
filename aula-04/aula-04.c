#include <stdio.h>

void troca(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int x = 10;
    int y = 20;

    printf("Antes da troca:\n");
    printf("x = %d | y = %d\n", x, y);

    troca(&x, &y);

    printf("\nDepois da troca:\n");
    printf("x = %d | y = %d\n", x, y);

    return 0;
}
