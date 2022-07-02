/*
   Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
   naturais que não são múltiplos de 7 ou que terminam com 7.
 */

#include <stdio.h>
#define MAX 100

int main(int argc, char const *argv[]) {

        int vetor[MAX];
        int x = 0;

        for (int i = 0; i < 126; i++) {
                vetor[x] = i;
                if (i % 7 != 0 && i != 17 && i != 27 && i != 37 && i != 47 && i != 57 && i != 67 && i != 77 && i != 87 && i != 97) {
                        x++;
                }
        }
        for (int i = 0; i < MAX; i++) {
                printf("%d\n", vetor[i]);
        }
        return 0;
}
