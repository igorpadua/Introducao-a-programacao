/*
   Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
   7.1
   Imprima o vetor,
   7.2
   o maior elemento e
   7.3
   a posição que ele se encontra.
 */

#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[]) {

        int vetor[MAX];
        int maior;

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }

        for (int i = 0; i < MAX; i++) {
                if (vetor[i] > maior) {
                        maior = vetor[i];
                }
                printf("Os valores são: %d\n", vetor[i]);
        }

        printf("O maior valor é: %d\n", maior);

        return 0;
}
