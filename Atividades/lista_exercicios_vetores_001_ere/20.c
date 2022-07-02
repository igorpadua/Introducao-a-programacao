/*
   Faça um programa que receba do usuário duas sequências de 10 valores inteiros.
   Armazene cada uma delas em um vetores A e B de inteiros.
   Crie um novo vetor denominado C calculando C = A - B.
   Mostre na tela os dados do vetor C.
 */

#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[]) {

        int a[MAX];
        int b[MAX];
        int c[MAX];

        printf("Vetor A:\n");
        for (int i = 0; i < MAX; i++) {
                scanf("%d", &a[i]);
        }

        printf("Vetor B:\n");
        for (int i = 0; i < MAX; i++) {
                scanf("%d", &b[i]);
        }

        for (int i = 0; i < MAX; i++) {
                c[i] = a[i] - b[i];
        }
        printf("\n");
        for (int i = 0; i < MAX; i++) {
                printf("%d\n", c[i]);
        }

        return 0;
}
