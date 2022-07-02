/*
   Faça um Programa que receba um valor em metros e imprima o valor convertido
   para centímetros.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        double metros, conversao;

        printf("Digita o valor em metros\n");
        scanf("%lf", &metros);

        conversao = metros * 100;

        printf("O valor em centímetros é de %.2lf\n", conversao);

        return 0;
}
