#include <stdio.h>
#include <stdlib.h>

typedef struct {
        int matricula;
        char sobrenome[50];
        int ano;
}Turma;

int main(int argc, char const *argv[]) {

        Turma *alunos;
        int tam;
        FILE *arquivo;

        scanf("%d\n", &tam);

        alunos = (Turma*) malloc(tam * sizeof(Turma));

        for (int i = 0; i < tam; i++) {
                scanf("%d\n", &alunos[i].matricula);
                scanf("%s\n", alunos[i].sobrenome);
                scanf("%d", &alunos[i].ano);
                getchar();
        }

        arquivo = fopen("alunos.txt", "w");

        for (int i = 0; i < tam; i++) {
                fprintf(arquivo, "%d %s %d\n", alunos[i].matricula, alunos[i].sobrenome, alunos[i].ano);
                printf("%d %s %d\n", alunos[i].matricula, alunos[i].sobrenome, alunos[i].ano);
        }

        fclose(arquivo);

        free(alunos);

        return 0;
}
