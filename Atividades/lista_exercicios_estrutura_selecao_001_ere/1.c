/*
   Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é
   menor que C.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        int a, b, c;

        printf("Digite o valor de 'A'\n");
        scanf("%d", &a);

        printf("Digite o valor de 'B'\n");
        scanf("%d", &b);

        printf("Digite o valor de 'C'\n");
        scanf("%d", &c);

        if (a + b < c) {
          printf("A soma de 'A' + 'B' é menor que 'C'\n");
        }

        return 0;
}
