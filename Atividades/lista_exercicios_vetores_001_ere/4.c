/*
   Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
   X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá
   escrever a soma dos valores encontrados nas respectivas posições X e Y.
 */

#include <stdio.h>
#define MAX 8

int main(int argc, char const *argv[]) {

        int vetor[MAX];
        int soma, x,y;

        printf("Digite os valores para o vetor:\n");
        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }

        printf("\nDois valores entre 0 a 7\n");
        scanf("%d\n", &x);
        scanf("%d", &y);

        soma = vetor[x] + vetor[y];

        printf("A soma de %d + %d = %d\n", vetor[x], vetor[y], soma);

        return 0;
}
