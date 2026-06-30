#include <stdio.h>

int main()
{

    int matriz[3][3];

    printf("Digite os valores da matriz 3x3:\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz informada:\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}