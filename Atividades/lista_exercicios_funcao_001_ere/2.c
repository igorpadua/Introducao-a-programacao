/*
   Escreva um programa na linguagem de programação C, que possua uma função que
   recebe um valor inteiro e verifica se o valor é par. A função deve retornar 1 se o número for
   par e 0 se for ímpar. Imprimir na tela o valor do número seguido da mensagem “é par” se o
   número for par e “é impar” se o número for ímpar.
 */

#include <stdio.h>

int main(void) {

        int par(int x);
        int num;
        int bol;

        printf("Digite um número\n");
        scanf("%d", &num);

        bol = par(num);

        if (bol == 1) {
                printf("é par\n");
        }else {
                printf("é impar\n");
        }

        return 0;
}

int par(int x){

        if (x % 2 == 0) {
                return 1;
        }else {
                return 0;
        }
}
