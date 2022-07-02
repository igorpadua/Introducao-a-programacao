/*
   Faça um programa que receba 6 números inteiros e mostre:
   Os números pares digitados;
   A soma dos números pares digitados;
   Os números ı́mpares digitados;
   A quantidade de números ı́mpares digitados;
 */

#include <stdio.h>
#define MAX 6

int main(int argc, char const *argv[]) {

        void impares(int vet[], int ele);
        void pares(int vet[], int ele);

        int vetor[MAX];

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }

        pares(vetor, MAX);
        printf("\n");
        impares(vetor, MAX);

        return 0;
}

void pares(int vet[], int ele) {

        int soma = 0;

        for (int i = 0; i < ele; i++) {
                if (vet[i] % 2 == 0) {
                        printf("Os números pares: %d\n", vet[i]);
                        soma += vet[i];
                }
        }

        printf("A soma soma dos pares: %d\n", soma);
}

void impares(int vet[], int ele) {

        int cont = 0;

        for (int i = 0; i < ele; i++) {
                if (vet[i] % 2 != 0) {
                        printf("Os números impares %d\n", vet[i]);
                        cont++;
                }
        }

        printf("Quantidade de números impares %d\n", cont);
}
