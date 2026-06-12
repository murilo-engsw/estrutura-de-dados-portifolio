#include <stdio.h>

int main()
{

    int numero;
    int soma = 0;

    for (int contador = 1; contador <= 5; contador++)
    {

        printf("Digite o %dº numero: ", contador);
        scanf("%d", &numero);

        soma += numero;
    }

    printf("\nSoma total: %d\n", soma);

    return 0;
}
