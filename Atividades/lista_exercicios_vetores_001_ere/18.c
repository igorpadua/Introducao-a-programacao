/*
   Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 ∗ i)%(i + 1),
   sendo:
   18.1 i a posição do elemento no vetor.
   18.2 Em seguida imprima o vetor na tela.
 */

#include <stdio.h>
#define MAX 50

int main(int argc, char const *argv[]) {

        int vetor[50];

        for (int i = 0; i < MAX; i++) {
                vetor[i] = (i + 5 * i) % (i + 1);
        }

        for (int i = 0; i < MAX; i++) {
                printf("%d\n", vetor[i]);
        }

        return 0;
}
