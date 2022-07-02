/*
   Escrever um programa que cadastre a altura e o peso de pessoas. Com os dados
   cadastrados, em seguida, calcule e imprima o IMC (peso / altura2) de cada pessoa.
 */

#include <stdio.h>

typedef struct {
        char nome[50];
        double peso;
        double altura;
}Pessoa;

int main(int argc, char const *argv[]) {

        void imprimi(Pessoa P[5]);
        Pessoa p[5];
        int i;
        for (i = 0; i < 5; i++) {
                puts("Digite o nome da pessoa:");
                scanf("%s", p[i].nome);
                puts("Digite o peso da pessoa:");
                scanf("%lf", &p[i].peso);
                getchar();
                puts("Digite a altura da pessoa:");
                scanf("%lf", &p[i].altura);
                getchar();
        }
        imprimi(p);

        return 0;
}

void imprimi(Pessoa P[5]) {
        double imc[5];
        int i;
        for (i = 0; i < 5; i++) {
                imc[i] = P[i].peso / (P[i].altura * P[i].altura);
        }
        for (i = 0; i < 5; i++) {
                printf("O IMC da %d° pessoa é %.2lf\n", i + 1,imc[i]);
        }
}
