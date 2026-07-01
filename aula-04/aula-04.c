#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int valor = 10;
    int *ptr = &valor;

    printf("--- Operadores & e * ---\n");
    printf("Valor original: %d\n", valor);
    
    *ptr = 20; 
    
    printf("Valor modificado pelo ponteiro: %d\n\n", valor);

    int x = 50, y = 100;
    
    printf("--- Passagem por Referencia ---\n");
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    
    troca(&x, &y);
    
    printf("Depois da troca: x = %d, y = %d\n\n", x, y);

    int arr[3] = {5, 10, 15};
    
    printf("--- Ponteiros e Arrays ---\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d | *(arr + %d) = %d\n", i, arr[i], i, *(arr + i));
    }

    return 0;
}
