/*
   Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior
   endereço.
   Entrada
   O programa deve ler os os valores informados pelo usuário, todos na mesma linha.
   Por exemplo: 15 96
   Saída
   O programa deve imprimir uma linha no seguinte formato:
   O maior endereço é: b65636d4.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        int num1, num2;

        scanf("%d %d", &num1, &num2);

        if (&num1 > &num2) {
                printf("O maior endereço é: %x\n", &num1);
        }else {
                printf("O maior endereço é: %x\n", &num2);
        }

        return 0;
}
