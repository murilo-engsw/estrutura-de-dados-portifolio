#include <stdio.h>
#include <string.h>

typedef struct {
    char rua[50];
    int numero;
} Endereco;

typedef struct {
    char nome[50];
    int idade;
    float nota;
    Endereco endereco; 
} Aluno;

void imprimirAluno(Aluno a) {
    printf("Nome: %s | Idade: %d | Nota: %.2f\n", a.nome, a.idade, a.nota);
    printf("Endereco: %s, %d\n", a.endereco.rua, a.endereco.numero);
}

void atualizarNota(Aluno *a, float novaNota) {
    a->nota = novaNota; 
}

int main() {
    Aluno turma[2];

    strcpy(turma[0].nome, "Carlos");
    turma[0].idade = 20;
    turma[0].nota = 7.5;
    strcpy(turma[0].endereco.rua, "Rua das Flores");
    turma[0].endereco.numero = 123;

    strcpy(turma[1].nome, "Ana");
    turma[1].idade = 22;
    turma[1].nota = 8.5;
    strcpy(turma[1].endereco.rua, "Avenida Central");
    turma[1].endereco.numero = 456;

    printf("--- Dados da Turma (Passagem por Valor e Operador .) ---\n");
    for (int i = 0; i < 2; i++) {
        imprimirAluno(turma[i]);
        printf("\n");
    }

    atualizarNota(&turma[0], 9.5);

    printf("--- Apos Atualizacao (Passagem por Referencia e Operador ->) ---\n");
    imprimirAluno(turma[0]);

    return 0;
}
