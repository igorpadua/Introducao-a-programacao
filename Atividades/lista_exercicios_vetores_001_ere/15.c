/*
   Faça um programa que leia um vetor de 5 posições para números reais e, depois, um
   código inteiro.
   15.1 Se o código for zero, finalize o programa;
   15.2 se for 1, mostre o vetor na ordem direta;
   15.3 se for 2, mostre o vetor na ordem inversa.
   15.4 Caso, o código for diferente de 1 e 2 escreva uma mensagem informando que o código
   é inválido.
 */

#include <stdio.h>
#define MAX 5

int main(int argc, char const *argv[]) {

        void ordireta(int v[], int ele);
        void orindireta(int v[], int ele);

        int vetor[MAX];
        int codigo;

        printf("Digite 5 números reais:\n");
        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }
        printf("Digite 0 para finalizar o programa\n");
        printf("Digite 1 para mostrar o vetor na ordem direta\n");
        printf("Digite 2 para mostrar o vetor na ordem inversa\n");
        scanf("%d", &codigo);
        printf("\n");
        if (codigo == 0 || codigo == 1 || codigo == 2) {
                switch (codigo) {
                case 0:
                        break;
                case 1:
                        ordireta(vetor, MAX);
                        break;
                case 2:
                        orindireta(vetor, MAX);
                        break;
                }
        }else {
                printf("Código invalido!!\n");
        }

        return 0;
}

void ordireta(int v[], int ele) {

        for (int i = 0; i < ele; i++) {
                printf("%d\n", v[i]);
        }
}

void orindireta(int v[], int ele) {

        for (int i = 4; i >= 0; i--) {
                printf("%d\n", v[i]);
        }
}
