/*
   Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a
   quantidade de números negativos e a soma dos números positivos desse vetor.
 */

#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[]) {

        int qnegativo(int v[], int ele);
        int vsoma(int v[], int ele);
        int vetor[MAX];
        int contagem, soma;

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }

        contagem = qnegativo(vetor, MAX);
        soma = vsoma(vetor, MAX);

        printf("Números negativos: %d\n", contagem);
        printf("A soma dos positivos são: %d\n", soma);

        return 0;
}

int qnegativo(int v[], int ele){

        int contagem = 0;

        for (int i = 0; i < ele; i++) {
                if (v[i] % 2 != 0) {
                        contagem += 1;
                }
        }

        return contagem;
}

int vsoma(int v[], int ele){

        int soma = 0;

        for (int i = 0; i < ele; i++) {
                if (v[i] % 2 == 0) {
                        soma += v[i];
                }
        }

        return soma;
}
