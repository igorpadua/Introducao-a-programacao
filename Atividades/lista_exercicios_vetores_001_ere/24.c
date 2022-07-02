/*
   Leia 10 números inteiros e armazene em um vetor v.
   24.1 Crie dois novos vetores v1 e v2.
   24.2 Copie os valores ı́mpares de v para v1, e os valores pares de v para v2.
   24.3 Note que cada um dos vetores v1 e v2 têm no máximo 10 elementos, mas nem todos
   os elementos são utilizados.
   24.4 No final escreva os elementos UTILIZADOS de v1 e v2.
 */

#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[]) {

        void vetor1(int v[], int ele);
        void vetor2(int v[], int ele);

        int v[MAX];

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &v[i]);
        }

        vetor1(v, MAX);
        printf("\n");
        vetor2(v, MAX);


        return 0;
}

void vetor1(int v[], int ele) {
        int v1[MAX];
        int x = 0;

        for (int i = 0; i < MAX; i++) {
                if (v[i] % 2 != 0) {
                        v1[x] = v[i];
                        x++;
                }
        }

        for (int i = 0; i < x; i++) {
                printf("v1 = %d\n", v1[i]);
        }
}

void vetor2(int v[], int ele) {

        int v2[MAX];
        int y = 0;

        for (int i = 0; i < MAX; i++) {
                if (v[i] % 2 == 0) {
                        v2[y] = v[i];
                        y++;
                }
        }


        for (int i = 0; i < y; i++) {
                printf("v2 = %d\n", v2[i]);
        }
}
