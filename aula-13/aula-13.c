#include <stdio.h>

int main() {
    int vetor[5];
    int maior;
    int somaPositivos = 0;
    int numTabuada;
    int numContagem;

    printf("--- Leitura e Processamento de Vetor ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
        
        if (i == 0) {
            maior = vetor[i];
        } else if (vetor[i] > maior) {
            maior = vetor[i];
        }

        if (vetor[i] > 0) {
            somaPositivos += vetor[i];
        }
    }

    printf("\nNumeros pares identificados: ");
    for (int i = 0; i < 5; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    
    printf("\nMaior elemento: %d", maior);
    printf("\nSoma dos valores positivos: %d\n\n", somaPositivos);

    printf("--- Geracao de Tabuada ---\n");
    do {
        printf("Digite um numero positivo para a tabuada: ");
        scanf("%d", &numTabuada);
        if (numTabuada <= 0) {
            printf("Erro: A entrada deve ser um numero positivo.\n");
        }
    } while (numTabuada <= 0);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numTabuada, i, numTabuada * i);
    }

    printf("\n--- Contagem Regressiva ---\n");
    do {
        printf("Digite um numero positivo para iniciar a contagem: ");
        scanf("%d", &numContagem);
        if (numContagem <= 0) {
            printf("Erro: A entrada deve ser um numero positivo.\n");
        }
    } while (numContagem <= 0);

    for (int i = numContagem; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
