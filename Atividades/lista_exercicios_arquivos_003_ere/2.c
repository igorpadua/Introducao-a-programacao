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
        char strin[100], *str, pessoa[40];
        int num;
        double maior = 0;
        FILE *arquivo;

        a = (turma*) malloc(NUM * sizeof(turma));

        for (int i = 0; i < NUM; i++) {
                scanf("%[^\n]\n%lf", a[i].nome, &a[i].nota);
                getchar();
        }

        arquivo = fopen("aluno.bin", "w");

        for (int i = 0; i < NUM; i++) {
                fprintf(arquivo, "%s, ", a[i].nome);
                num = strlen(a[i].nome);
                fprintf(arquivo, "%.2lf\n", a[i].nota);
        }

        fclose(arquivo);

        arquivo = fopen("aluno.bin", "r");

        while (fgets(strin, 100, arquivo) != NULL) {
                str = strtok(strin, ",");
                str = strtok(NULL, ", ");
                num = atof(str);
                if (maior < num) {
                        strcpy(pessoa, strin);
                        maior = num;
                }
        }
        printf("%s, %.2lf\n", pessoa, maior);

        fclose(arquivo);

        return 0;
}
