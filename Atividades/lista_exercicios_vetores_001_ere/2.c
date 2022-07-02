/*
   Crie um programa que lê 6 valores inteiros, armazene-os em um vetor e, em seguida, mostre
   na tela os valores lidos.
 */

#include <stdio.h>
#define MAX 6

int main(int argc, char const *argv[]) {

        int vetor[MAX];

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }

        for (int i = 0; i < MAX; i++) {
                printf("%d\n", vetor[i]);
        }

        return 0;
}
