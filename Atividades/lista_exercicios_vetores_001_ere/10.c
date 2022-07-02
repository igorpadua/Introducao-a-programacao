/*
   Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
   calcule e imprima a média geral.
 */

#include <stdio.h>
#define MAX 15

int main(int argc, char const *argv[]) {

        double vetor[MAX];
        double media;

        for (int i = 0; i < MAX; i++) {
                scanf("%lf", &vetor[i]);
        }

        for (int i = 0; i < MAX; i++) {
                media += vetor[i];
        }

        printf("A média geral é: %.2lf\n", media / MAX);


        return 0;
}
