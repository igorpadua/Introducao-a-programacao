/*
   Escrever um programa que cadastre produtos, com os seguintes dados: nome,
   código e preço. Em seguida, imprima uma lista com o nome e código de todos os
   produtos cadastrados. Por último, consulte o preço de um produto através de seu
   código
 */

#include <stdio.h>

typedef struct {
        char nome[50];
        int codigo;
        double preco;
}Produto;

int main(int argc, char const *argv[]) {

        void preco_protudo(Produto P[10]);
        void imprimi(Produto P[10]);
        Produto p[10];
        int i;

        for (i = 0; i < 10; i++) {
                puts("Digite o nome do produto:");
                scanf("%[^\n]s", p[i].nome);
                getchar();
                puts("Digite o código do produto:");
                scanf("%d", &p[i].codigo);
                getchar();
                puts("Digite o preço do produto:");
                scanf("%lf", &p[i].preco);
                getchar();
        }
        imprimi(p);
        preco_protudo(p);

        return 0;
}

void imprimi(Produto P[10]) {
        int i;

        for (i = 0; i < 10; i++) {
                printf("O nome do produto: %s\n", P[i].nome);
                printf("O número do codigo do produto: %d\n", P[i].codigo);
        }
}

void preco_protudo(Produto P[10]) {

        int i;
        int codigo;

        puts("Digite o código do produto:");
        scanf("%d", &codigo);
        for (i = 0; i < 10; i++) {
                if (codigo == P[i].codigo) {
                        printf("O nome do produto: %s\n", P[i].nome);
                        printf("O valor do produto: %.2lf\n", P[i].preco);
                }
        }

}
