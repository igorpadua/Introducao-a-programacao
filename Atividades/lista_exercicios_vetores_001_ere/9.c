/*
   Crie um programa que peça ao usuário para informar 6 valores inteiros.
   9.1
   Se os valores forem pares, devem ser armazenados em um vetor.
   9.2
   Se não forem devem ser desconsiderados.
   9.3
   Imprimir na tela o conteúdo do vetor.
 */

#include <stdio.h>
#define MAX 6

int main(int argc, char const *argv[]) {

        int vetor[MAX];
        int par[MAX];
        int x = 0;

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }

        for (int i = 0; i < MAX; i++) {
                if (vetor[i] % 2 == 0) {
                        par[x] = vetor[i];
                        x++;
                }
        }
        printf("\n");
        for (int i = 0; i < x; i++) {
                printf("%d\n", par[i]);
        }

        return 0;
}
