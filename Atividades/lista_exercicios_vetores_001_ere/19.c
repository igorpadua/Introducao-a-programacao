/*
   Escreva um programa que leia números inteiros no intervalo [0,50] e
   os armazene em um vetor com 10 posições.
   Preencha um segundo vetor apenas com os números ı́mpares do primeiro vetor.
   Imprima os dois vetores, 2 elementos por linha.
 */

#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[]) {

        int vetor[MAX];
        int primos[MAX];
        int x = 0;
        int errado = 0;

        for (int i = 0; i < MAX; i++) {
                        scanf("%d", &vetor[i]);
        }

        for (int i = 0; i < MAX; i++) {
                if (vetor[i] < 0 && vetor[i] > 50) {
                        errado++;
                }
        }

        if (errado > 0) {
                printf("A números menores que 0 e maiores que 50\n");
        }else {
                for (int i = 0; i < MAX; i++) {
                        if (vetor[i] % 2 != 0) {
                                primos[x] = vetor[i];
                                x++;
                        }
                }

                printf("Vetor principal:\n");
                for (int i = 0; i < 10; i += 2) {
                        printf("%d    %d\n", vetor[i], vetor[i + 1]);
                }
                printf("Vetor de primos:\n");
                for (int i = 0; i < x; i += 2) {
                        if (primos[i] != 0) {
                                printf("%d ", primos[i]);
                        }
                        if (primos[i + 1] != 0) {
                                printf("%d\n", primos[i + 1]);
                        }
                }
        }
        return 0;
}
