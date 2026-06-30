#include <stdio.h>

int main()
{

    int numeros[5];
    int soma = 0;

    printf("Digite 5 numeros inteiros:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    printf("\nElementos do vetor:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n\nSoma dos elementos: %d\n", soma);

    return 0;
}
