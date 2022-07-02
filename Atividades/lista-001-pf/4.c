/*
   Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o
   seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por exemplo e, após a execução
   da função, A conterá o valor de B e B terá o valor de A.
   Entrada
   O programa deve ler os dois valores informados pelo usuário, todos na mesma linha. Por exemplo: 50
   100
   Saída
   O programa deve imprimir oito linhas contendo o seguinte formato:
   Os valores de A e B são: 100 50.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        void trocar(int *x, int *y);
        int var1, var2;
        int *pvar1 = &var1, *pvar2 = &var2;

        scanf("%d %d", &var1, &var2);

        trocar(pvar1, pvar2);

        printf("Os valores de A e B são: %d %d\n", var1, var2);

        return 0;
}

void trocar(int *x, int *y) {

        int trx = *x;

        *x = *y;
        *y = trx;

}
