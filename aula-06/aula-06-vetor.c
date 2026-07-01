#include <stdio.h>

int main() {
    int vetor[5];
    int soma = 0;

    printf("--- Leitura e Processamento de Vetor ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
        soma += vetor[i]; // Utilizando variavel acumuladora
    }

    printf("\nElementos armazenados no vetor: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\nSoma total dos elementos: %d\n", soma);

    /* Nota: O laco for vai de 0 a 4. Tentar acessar vetor[5] causaria
       comportamento indefinido (acesso invalido a memoria). */

    return 0;
}
