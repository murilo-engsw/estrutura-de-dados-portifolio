#include <stdio.h>

int main()
{

    int numeros[5];

    printf("Digite 5 numeros inteiros:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros pares digitados:\n");

    for (int i = 0; i < 5; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            printf("%d ", numeros[i]);
        }
    }

    printf("\n");

    return 0;
}
