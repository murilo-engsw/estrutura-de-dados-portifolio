#include <stdio.h>

typedef struct
{
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main()
{

    Aluno aluno;

    printf("Digite o nome do aluno: ");
    scanf("%49s", aluno.nome);

    printf("Digite a idade: ");
    scanf("%d", &aluno.idade);

    printf("Digite a nota: ");
    scanf("%f", &aluno.nota);

    printf("\nDados do aluno:\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f\n", aluno.nota);

    return 0;
}
