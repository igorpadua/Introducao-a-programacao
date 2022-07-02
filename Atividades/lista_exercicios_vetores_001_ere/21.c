/*
   Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo,
   nas posições pares os valores do primeiro e nas posições impares os valores do segundo.
 */

#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[]) {

        int vetor[MAX], vetor2[MAX], vetor3[20];

        printf("1° vetor\n");
        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }
        printf("2° vetor\n");
        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor2[i]);
        }

        for (int i = 0; i < 10;) {
                for (int j = 0; j < 20; j += 2) {
                        vetor3[j] = vetor[i];
                        i++;
                }
        }

        for (int i = 0; i < 10; i++) {
                for (int j = 1; j < 20; j += 2) {
                        vetor3[j] = vetor2[i];
                        i++;
                }
        }

        printf("\n");
        for (int i = 0; i < 20; i++) {
                printf("%d\n", vetor3[i]);
        }

        return 0;
}
