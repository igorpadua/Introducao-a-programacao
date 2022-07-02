#include <stdio.h>
#define MAX 10

// Declarando as funções
int *cubo(int v[]);
int quadrado(int v[]);
void inversa(int v[]);
void par_e_impar(int v[]);
double media(int v[]);


int main(int argc, char const *argv[]) {

        // Variáveis
        int vetor[MAX];
        int pcubo, pquadrado;
        double pmedia;
        int positivo = 10;

        // Recebe os valores
        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }

        // Descobre se todos os números são positivos
        for (int i = 0; i < MAX; i++) {
                if (vetor[i] < 0) {
                        positivo--;
                }
        }
        // Apenas faz se todos os números forem positivos
        if (positivo == 10) {
                // Descobre se o número é par ou impar
                par_e_impar(vetor);
                // Faz o cubo do menor número do vetor
                pcubo = *cubo(vetor);
                // Faz o quadrado do maior número do vetor
                pquadrado = quadrado(vetor);
                // Faz a inversa do vetor
                inversa(vetor);
                // Faz a média do vetor
                pmedia = media(vetor);

                // Imprime a media
                printf("A média dos valores do vetor é: %.2lf\n", pmedia);
                // Imprime o cubo do menor valor do vetor
                printf("O cubo do valor do menor elemento do vetor é: %d\n", pcubo);
                // Imprime o quadrado do maior número do vetor
                printf("O quadrado do maior elemento do vetor é: %d\n", pquadrado);
        }else {
                printf("Nem todos os valores são positivos\n");
        }

        return 0;
}

int *cubo(int v[]) {

        int menor = v[0];
        int *menor_valor = &menor;

        // Descobre o menor valor do vetor
        for (int i = 0; i < MAX; i++) {
                if (menor > v[i]) {
                        menor = v[i];
                }
        }
        // Faz o cubo do menor número do vetor
        menor = menor * menor * menor;

        return menor_valor;
}

int quadrado(int v[]) {

        int maior = v[0];
        // Descobre o maior número do vetor
        for (int i = 0; i < MAX; i++) {
                if (maior < v[i]) {
                        maior = v[i];
                }
        }

        return maior * maior;
}

void inversa(int v[]) {
        
        // Imprime a função inversa
        printf("Impressão do vetor na ordem inversa: ");
        for (int i = 9; i >= 0; i--) {
                printf("%d ", v[i]);
        }
        printf("\n");
}

void par_e_impar(int v[]) {

        int vetor_par[MAX], vetor_impar[MAX];
        int x = 0, y = 0;

        // Descobre se o número é par
        for (int i = 0; i < MAX; i++) {
                if (v[i] % 2 == 0) {
                        vetor_par[x] = v[i];
                        x++;
                }
        }

        // Descobre se o número é impar
        for (int i = 0; i < MAX; i++) {
                if (v[i] % 2 != 0) {
                        vetor_impar[y] = v[i];
                        y++;
                }
        }

        // Imprime o vetor par
        printf("Os valores pares do vetor são: ");
        for (int i = 0; i < x; i++) {
                printf("%d ", vetor_par[i]);
        }
        printf("\n");

        // Imprime o vetor impar
        printf("Os valores ímpares do vetor são: ");
        for (int i = 0; i < y; i++) {
                printf("%d ", vetor_impar[i]);
        }
        printf("\n");
}

double media(int v[]) {

        double media_vetor = 0;

        // Faz a soma dos valores do vetor
        for (int i = 0; i < MAX; i++) {
                media_vetor += v[i];
        }

        return media_vetor / MAX;
}
