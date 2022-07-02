/*
   Faça um programa que leia vários inteiros positivos e mostre, no final, a soma dos
   números pares e a soma dos números ímpares. A execução é interrompida quando
   o usuário informar um número maior que 1000.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        int num;
        int i;
        int x;

        do {
          printf("Digite um número inteiro positivo\n");
          scanf("%d", &num);

          if (num > 0 && num % 2 == 0 && num < 1000) {
            i += num;
          }

          if (num > 0 && num % 2 != 0 && num < 1000) {
            x += num;
          }
          
        } while(num < 1000);

        printf("A soma dos números pares: %d\n", i);
        printf("A soma dos números ímpares: %d\n", x);

        return 0;
}
