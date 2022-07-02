/*
   Leia um vetor de 10 posições.
   5.1
   Contar quantos valores pares ele possui.
   5.2
   Imprimir na tela somente o s valores pares.
 */

#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[]) {

        int vetor[MAX];
        int contador = 0;

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }

        for (int i = 0; i < MAX; i++) {
                if (vetor[i] % 2 == 0) {
                        contador += 1;
                }
        }

        printf("Ele possui: %d pares\n", contador);

        for (int i = 0; i < MAX; i++) {
                if (vetor[i] % 2 == 0) {
                        printf("%d\n", vetor[i]);
                }
        }


        return 0;
}
