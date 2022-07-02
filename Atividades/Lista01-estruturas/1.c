/*
   Escrever um programa que cadastre livros. Insira o título, autor e preço. Em
   seguida imprima os dados de todos os livros cadastrados.
 */

#include <stdio.h>

typedef struct {
        char titulo[50];
        char autor[50];
        double preco;
}Livros;

int main(int argc, char const *argv[]) {

        void imprimi(Livros L[5]);
        Livros l[5];
        int i;

        for (i = 0; i < 5; i++) {
                puts("Digite o título do livro:");
                scanf("%[^\n]s", l[i].titulo);
                getchar();
                puts("Digite o autor do livro:");
                scanf("%[^\n]s", l[i].autor);
                getchar();
                puts("Digite o valor do livro:");
                scanf("%lf", &l[i].preco);
                getchar();
        }
        imprimi(l);



        return 0;
}

void imprimi(Livros L[5]) {

        int i;
        for (i = 0; i < 5; i++) {
                printf("O nome do livro: %s\n", L[i].titulo);
                printf("O nome do autor: %s\n", L[i].autor);
                printf("O preço do livro: %.2lf\n", L[i].preco);
                printf("\n");
        }

}
