#include <stdio.h>

int main()
{
    int numero;
    int soma;
    int contador;
    int continuar;

    do
    {
        soma = 0;

        printf("--- Leitura e Soma (For e Acumulador) ---\n");
        for (int i = 1; i <= 5; i++)
        {
            printf("Digite o %d numero: ", i);
            scanf("%d", &numero);
            soma += numero;
        }
        printf("Soma total: %d\n\n", soma);

        printf("--- Contagem Regressiva (While e Contador) ---\n");
        printf("Digite um numero para iniciar a contagem: ");
        scanf("%d", &contador);

        while (contador > 0)
        {
            printf("%d ", contador);
            contador--;
        }
        printf("0\n\n");

        printf("Deseja testar novamente? (1 - Sim / 0 - Nao): ");
        scanf("%d", &continuar);
        printf("\n");

    } while (continuar != 0);

    return 0;
}
