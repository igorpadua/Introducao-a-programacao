/*
   Escreva um programa que contenha duas variáveis inteiras.
   Leia essas variáveis do teclado.
   Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
   Entrada
   O programa deve ler os dois valores innteiros informados pelo usuário, todos na mesma linha. Por
   exemplo: 923 854
   Saída
   O programa deve imprimir uma linha no seguinte formato:
   O contéudo da variável de maior endereço é 854.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        int num1, num2;

        scanf("%d %d", &num1, &num2);

        if (&num1 > &num2) {
                printf("O contêudo da variável de maior endereço é %d\n", num1);
        }else {
                printf("O contêudo da variável de maior endereço é %d\n", num2);
        }

        return 0;
}
