/*
   Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
   ordem inversa.
 */

#include <stdio.h>
#define MAX 6

int main(int argc, char const *argv[]) {

        int vetor[6];

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }
        printf("\nOrdem inversa:\n");
        for (int i = 6; i > 0; i--) {
                printf("%d\n", vetor[i]);
        }

        return 0;
}
