/*Faça um programa que leia dois valores inteiros (um ímpar e um par) e chame uma função que receba
   estes dois valores como parâmetro de entrada e retorne o valor par na primeira variável e o ímpar valor na
   segunda variável. Escreva o conteúdo das duas variáveis na tela.
   Entrada
   O programa deve ler os dois valores informados pelo usuário, todos na mesma linha. Por exemplo: 49
   64
   Saída
   O programa deve imprimir uma linha no seguinte formato:
   Os valores de A e B são: 64 49.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        void valores(int *x, int *y);
        int var1, var2;
        int *pvar1, *pvar2;

        pvar1 = &var1;
        pvar2 = &var2;

        scanf("%d %d", &var1, &var2);

        if ((var1 % 2 == 0 && var2 % 2 != 0) || (var1 % 2 != 0 && var2 % 2 == 0)) {
                valores(pvar1, pvar2);
                printf("Os valores de A e B são: %d %d\n", *pvar1, *pvar2);
        }


        return 0;
}

void valores(int *x, int *y){

        int z;

        if (*x % 2 == 0) {
                *x = *x;
                *y = *y;
        }else {
                z = *y;
                *y = *x;
                *x = z;
        }
}
