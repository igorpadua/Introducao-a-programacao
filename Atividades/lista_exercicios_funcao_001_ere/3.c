/*
   Escreva um programa na linguagem de programação C, que possua uma função que
   recebe um valor inteiro e verifica se o valor é positivo, negativo ou zero. A função deve
   retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0. Imprimir na tela o valor
   do número seguido da mensagem “é negativo” ou “é positivo”.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        int verifica(int x);
        int num;
        int valor;

        printf("Digite um número\n");
        scanf("%d", &num);

        valor = verifica(num);

        if (valor == 1) {
                printf("%d é positivo\n", num);
        } if (valor == -1) {
                printf("%d é negativo\n", num);
        } else if (valor == 0) {
                printf("%d\n", num);
        }

        return 0;
}

int verifica(int x){

        if (x > 0) {
                return 1;
        } if (x == 0) {
                return 0;
        }else {
                return -1;
        }
}
