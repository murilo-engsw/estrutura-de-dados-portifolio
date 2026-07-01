#include <stdio.h>

int main() {
    int matriz[2][2];
    int soma = 0;

    printf("--- Leitura e Processamento de Matriz ---\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j]; // Acumulando valores com lacos aninhados
        }
    }

    printf("\nLayout da Matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSoma total dos elementos da matriz: %d\n", soma);

    return 0;
}
