/*
   Faça um programa que receba do usuário 10 valores inteiros e os armaze em um vetor. Em
   seguida deverá ser impresso o maior e o menor elemento do vetor.
 */

#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[]) {

        int vetor[MAX];
        int menor, maior;

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }

        menor = vetor[1];
        
        for (int i = 0; i < MAX; i++) {
                if (vetor[i] > maior) {
                        maior = vetor[i];
                }

                if (vetor[i] < menor) {
                        menor = vetor[i];
                }
        }

        printf("O maior número é: %d\n", maior);
        printf("O menor número é: %d\n", menor);

        return 0;
}
