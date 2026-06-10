#include <stdio.h>

int main()
{

    int numero1, numero2;
    int soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = (float)numero1 / numero2;

    printf("\nResultados:\n");
    printf("Soma = %d\n", soma);
    printf("Subtracao = %d\n", subtracao);
    printf("Multiplicacao = %d\n", multiplicacao);
    printf("Divisao = %.2f\n", divisao);

    return 0;
}
