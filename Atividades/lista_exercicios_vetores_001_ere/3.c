/*
   Ler um conjunto de números reais, armazenando-o em um vetor e calcular o quadrado das
   componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10
   elementos cada. Imprimir todos os conjuntos.
 */


#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[]) {

        int reais[MAX];
        int quadrado[MAX];

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &reais[i]);
        }

        for (int i = 0; i < MAX; i++) {
                quadrado[i] = reais[i] * reais[i];
        }

        for (int i = 0; i < MAX; i++) {
                printf("%d\n", quadrado[i]);
        }

        return 0;
}
