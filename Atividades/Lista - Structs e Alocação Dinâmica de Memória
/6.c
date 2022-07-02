#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct {
        int matricula;
        int dia;
        int mes;
        int ano;
        char nome[200];
} Sala;
 
int main(int argc, char const *argv[]) {
 
        void ordena(Sala aluno[], int n);
        Sala alunos[30];
        int n, i;
 
        scanf("%d\n", &n);
        for (i = 0; i < n; i++) {
                scanf("%d %d %d %d %[^\n]", &alunos[i].matricula, &alunos[i].dia, &alunos[i].mes, &alunos[i].ano, alunos[i].nome);
        }
        ordena(alunos, n);
 
 
        return 0;
}
 
void ordena(Sala aluno[], int n) {
 
        int ComparaDataNasc(Sala primeiro, Sala segundo);
        int i, j, compara;
        Sala copia;
 
 
        for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n; j++) {
                        compara = ComparaDataNasc(aluno[i], aluno[j]);
                        if (compara == 1) {
                                copia = aluno[j];
                                aluno[j] = aluno[i];
                                aluno[i] = copia;
                        }
                }
        }
        for (i = 0; i < n; i++) {
                printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", aluno[i].matricula, aluno[i].nome, aluno[i].dia, aluno[i].mes, aluno[i].ano);
        }
 
}
 
int ComparaDataNasc(Sala primeiro, Sala segundo) {
 
        int i, j;
 
        for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                        if (primeiro.ano < segundo.ano) {
                                return 0;
                        }else if (primeiro.ano > segundo.ano) {
                                return 1;
                        }else {
                                if (primeiro.mes > segundo.mes) {
                                        return 0;
                                }else if (primeiro.mes < segundo.mes) {
                                        return 1;
                                }else {
                                        if (primeiro.dia < segundo.dia) {
                                                return 0;
                                        }else if (primeiro.dia >= segundo.dia) {
                                                return 1;
                                        }
                                }
                        }
                }
        }
 
        return 0;
}
