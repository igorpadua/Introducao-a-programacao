#include <stdio.h>

typedef struct {
        char nome[50];
        int matricula;
        double mediaf;
}Alunos;

int main(int argc, char const *argv[]) {

        void aprovado_reprovado(Alunos P[10]);
        Alunos fac[10];

        for (int i = 0; i < 10; i++) {
                printf("Digite o nome do %d° aluno:\n", i + 1);
                scanf("%[^\n]s", fac[i].nome);
                getchar();
                printf("Digite a matricula do %d° aluno:\n", i + 1);
                scanf("%d", &fac[i].matricula);
                getchar();
                printf("Digite a mediafinal do %d° aluno:\n", i + 1);
                scanf("%lf", &fac[i].mediaf);
                getchar();
        }
        aprovado_reprovado(fac);

        return 0;
}

void aprovado_reprovado(Alunos P[10]) {

        void imprimi(Alunos *A[10], Alunos *B[10], int x, int y);

        Alunos *aprovado[10], *reprovado[10];
        int x = 0, y = 0;
        for (int i = 0; i < 10; i++) {
                if (P[i].mediaf >= 5) {
                        aprovado[x] = &P[i];
                        x++;
                }else {
                        reprovado[y] = &P[i];
                        y++;
                }
        }
        imprimi(aprovado, reprovado, x , y);
}

void imprimi(Alunos *A[10], Alunos *B[10], int x, int y) {

        puts("Aprovados:");
        for (int i = 0; i < x; i++) {
                printf("%d° Aluno\n", i + 1);
                printf("Nome: %s\n", A[i]->nome);
                printf("Matricula: %d\n", A[i]->matricula);
                printf("Media final: %.2lf\n", A[i]->mediaf);
        }
        puts("Reprovados:");
        for (int i = 0; i < y; i++) {
                printf("%d° Aluno\n", i + 1);
                printf("Nome: %s\n", B[i]->nome);
                printf("Matricula: %d\n", B[i]->matricula);
                printf("Media final: %.2lf\n", B[i]->mediaf);
        }

}
