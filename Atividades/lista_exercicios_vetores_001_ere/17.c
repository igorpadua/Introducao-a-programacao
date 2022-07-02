/*
   Faça um programa que leia um vetor de 10 números.
   Leia um número x.
   Conte os múltiplos de x presentes no vetor e
   mostre-os na tela.
 */

#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[]) {

        void multiplos(int v[], int ele, int x);

        int vetor[MAX];
        int x;

        printf("Dez números:\n");
        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }
        printf("Um número X\n");
        scanf("%d", &x);

        multiplos(vetor, MAX, x);

        return 0;
}

void multiplos(int v[], int ele, int x) {

        int cont = 0;

        for (int i = 0; i < ele; i++) {
                if (v[i] % x == 0) {
                        cont++;
                }
        }

        printf("Tem %d multiplos de %d\n", cont, x);

        for (int i = 0; i < ele; i++) {
                if (v[i] % x == 0) {
                        printf("Os multiplos: %d\n", v[i]);
                }
        }
}
