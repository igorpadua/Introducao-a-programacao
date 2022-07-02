#include <stdio.h>
#include <stdlib.h>
 
typedef struct {
        int codigo_curso;
        double valor_credito;
        char nome_curso[1001];
}Curso;
 
typedef struct {
        char nome_aluno[501];
        int matricula;
        int credito;
}Aluno;
 
int main(int argc, char const *argv[]) {
 
        int n, m, i, j;
        Aluno *aluno;
        Curso *curso;
 
 
        curso = (Curso*) malloc(30 * sizeof(Curso));
        scanf("%d\n", &n);
        for (i = 0; i < n; i++) {
                scanf("%d\n", &curso[i].codigo_curso);
                scanf("%lf\n", &curso[i].valor_credito);
                scanf("%[^\n]", curso[i].nome_curso);
                getchar();
        }
        scanf("%d\n", &m);
        aluno = (Aluno*) malloc(1000 * sizeof(Aluno));
        for (i = 0; i < m; i++) {
                scanf("%[^\n]\n", aluno[i].nome_aluno);
                scanf("%d\n", &aluno[i].matricula);
                scanf("%d", &aluno[i].credito);
                getchar();
        }
 
        for (i = 0; i < m; i++) {
                printf("Aluno(a): %s ", aluno[i].nome_aluno);
                for (j = 0; j < n; j++) {
                        if (aluno[i].matricula == curso[j].codigo_curso) {
                                printf("Curso: %s ", curso[j].nome_curso);
                                printf("Num. Creditos: %d ", aluno[i].credito);
                                printf("Valor Credito: %.2lf ", curso[j].valor_credito);
                                printf("Mensalidade: %.2lf\n", aluno[i].credito * curso[j].valor_credito);
                        }
                }
        }
        // Liberar espaço na memoria
        free(aluno);
        free(curso);
 
        return 0;
} 
