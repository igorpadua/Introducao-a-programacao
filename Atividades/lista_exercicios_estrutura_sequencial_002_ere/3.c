/*
   Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        double raio, area;

        printf("Digite o valor do raio do círculo\n");
        scanf("%lf", &raio);

        area = (raio * raio) * 3.14;

        printf("Área: %.2lf\n", area);

        return 0;
}
