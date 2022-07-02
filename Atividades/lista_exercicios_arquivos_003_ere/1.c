#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 5

typedef struct {
        char nome[40];
        double nota;
}turma;

int main(int argc, char const *argv[]) {

        void string(FILE *x, char *nome);

        turma *a;
        int num;
        FILE *arquivo;

        a = (turma*) malloc(NUM * sizeof(turma));

        for (int i = 0; i < NUM; i++) {
                scanf("%[^\n]\n%lf", a[i].nome, &a[i].nota);
                getchar();
        }

        arquivo = fopen("alunos.txt", "w");

        for (int i = 0; i < NUM; i++) {
                fprintf(arquivo, "Nome do aluno: %s ", a[i].nome);
                num = strlen(a[i].nome);
                if (num < 40) {
                        for (int j = 0; j < 40 - num; j++) {
                                fprintf(arquivo, " ");
                        }
                }
                fprintf(arquivo, "Nota final: %.2lf\n", a[i].nota);
        }

        fclose(arquivo);

        return 0;
}
