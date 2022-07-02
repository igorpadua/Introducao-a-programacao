/*
   Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuı́rem
   valores negativos.
 */

#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[]) {
        int vetor[MAX];

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }

        for (int i = 0; i < MAX; i++) {
                if (vetor[i] % 2 != 0) {
                        vetor[i] = 0;
                }
        }

        for (int i = 0; i < MAX; i++) {
                printf("%d\n", vetor[i]);
        }

        return 0;
}
