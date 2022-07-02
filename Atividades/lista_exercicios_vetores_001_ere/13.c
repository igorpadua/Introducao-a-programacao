/*
   Faça um programa que leia um vetor de 10 posições e verifique se existem valores
   iguais e os escreva na tela.
 */

#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[]) {

        void verificar(int v[], int ele);

        int vetor[MAX];

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }

        verificar(vetor, MAX);

        return 0;
}

void verificar(int v[], int ele) {

        for (int i = 0; i < ele; i++) {
                if (v[i] == v[i + 1]) {
                        printf("O valor igual é %d", v[i]);
                }
        }

}
