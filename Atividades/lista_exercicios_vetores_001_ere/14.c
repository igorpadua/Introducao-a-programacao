/*
   Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando
   elementos repetidos.
 */

#include <stdio.h>
#define MAX 20

int main(int argc, char const *argv[]) {

        void repetidos(int v[], int ele);

        int vetor[MAX];

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }
        
        printf("\n");
        repetidos(vetor, MAX);

        return 0;
}

void repetidos(int v[], int ele) {

        int vetor[ele];
        int n = ele;

        for (int i = 0; i < ele; i++) {
                vetor[i] = v[i];
        }

        for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                        if (vetor[i] == v[j]) {
                                for (int k = j + 1; k < n; k++) {
                                        v[k - 1] = v[k];
                                }
                                n--;
                        }
                }
        }

        for (int i = 0; i < n; i++) {
                printf("%d\n", v[i]);
        }
}
