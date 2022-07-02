/*
   As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e
   lhe contraram para desenvolver o programa que calculará os reajustes. Faça um programa que
   recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no
   salário atual:
   • salários até R$ 280,00 (incluindo) : aumento de 20%
   • salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
   • salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
   • salários de R$ 1500,00 em diante : aumento de 5%

   Após o aumento ser realizado, informe na tela:
   • o salário antes do reajuste;
   • o percentual de aumento aplicado;
   • o valor do aumento;
   • o novo salário, após o aumento.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        double salario, novo_salario, aumento;

        printf("Digite o valor do seu salário\n");
        scanf("%lf", &salario);

        if (salario <= 280) {
          aumento = salario * 0.2;
          novo_salario = aumento + salario;

          printf("O salário antes do reajuste: %.2lf\n", salario);
          printf("O percentual de aumento aplicado: 20%%\n");
          printf("O valor do aumento: %.2lf\n", aumento);
          printf("O novo salário, após o aumento.: %.2lf\n", novo_salario);
        }if (salario > 280 && salario < 700) {
          aumento = salario * 0.15;
          novo_salario = aumento + salario;

          printf("O salário antes do reajuste: %.2lf\n", salario);
          printf("O percentual de aumento aplicado: 15%%\n");
          printf("O valor do aumento: %.2lf\n", aumento);
          printf("O novo salário, após o aumento.: %.2lf\n", novo_salario);
        }if (salario >= 700 && salario < 1500) {
          aumento = salario * 0.10;
          novo_salario = aumento + salario;

          printf("O salário antes do reajuste: %.2lf\n", salario);
          printf("O percentual de aumento aplicado: 10%%\n");
          printf("O valor do aumento: %.2lf\n", aumento);
          printf("O novo salário, após o aumento.: %.2lf\n", novo_salario);
        }if (salario >= 1500) {
          aumento = salario * 0.05;
          novo_salario = aumento + salario;

          printf("O salário antes do reajuste: %.2lf\n", salario);
          printf("O percentual de aumento aplicado: 5%%\n");
          printf("O valor do aumento: %.2lf\n", aumento);
          printf("O novo salário, após o aumento.: %.2lf\n", novo_salario);
        }


        return 0;
}
