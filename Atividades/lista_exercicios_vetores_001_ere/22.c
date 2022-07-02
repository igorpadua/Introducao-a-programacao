/*
   Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o
   número do aluno e o segundo representando a sua altura em metros.
   22.1 Encontre o aluno mais baixo e o mais alto.
   22.2 Mostre o número do aluno mais baixo e do mais alto, juntamente com suas alturas.
 */
#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[]) {

        int alunos[MAX];
        double altura[MAX];
        double baixo, alto;
        int cont = 0, cont2 = 0;
        for (int i = 0; i < MAX; i++) {
                scanf("%d %lf", &alunos[i], &altura[i]);
        }

        baixo = altura[0];
        alto = altura[0];

        for (int i = 0; i < MAX; i++) {

                if (baixo > altura[i]) {
                        baixo = altura[i];
                        cont++;
                }

                if (alto < altura[i]) {
                        alto = altura[i];
                        cont2++;
                }
        }

        printf("O número do aluno mais alto tem número %d e tem altura %.2lf\n", cont2, alto);
        printf("O número do aluno mais baixo tem número %d e tem altura %.2lf\n", cont, baixo);

        return 0;
}
