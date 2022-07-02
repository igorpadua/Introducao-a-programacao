/*
   Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da
   compra for menor que R$ 20,00; caso contrário, o lucro será de 30%. Elabore um algoritmo
   que leia o valor do produto e imprima o valor de venda para o produto.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        double produto, lucro;

        printf("Digite o valor do produto\n");
        scanf("%lf", &produto);

        if (produto < 20) {
          lucro = produto * 0.45;
          printf("O valor de venda do produto: %.2lf\n", produto + lucro);
        }else {
          lucro = produto * 0.30;
          printf("O valor de venda do produto: %.2lf\n", produto + lucro);
        }

        return 0;
}
