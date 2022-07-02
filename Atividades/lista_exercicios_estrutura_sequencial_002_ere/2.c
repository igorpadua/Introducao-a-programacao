/*
   Faça um Programa que pergunte quanto você ganha por hora e o número de
   horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        double horas_trabalhadas, horas_mes, total;

        printf("Digite quanto você ganha por hora\n");
        scanf("%lf", &horas_trabalhadas);
        printf("Digite o valor o número de horas trabalhadas no mês\n");
        scanf("%lf", &horas_mes);

        total = horas_trabalhadas * horas_mes;

        printf("O total do seu salário nesse mês é de %.2lf\n", total);

        return 0;
}
