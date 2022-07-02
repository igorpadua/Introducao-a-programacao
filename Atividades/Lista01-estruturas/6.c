#include <stdio.h>
#define MAX 10

typedef struct {
        int codigo;
        double preco;
        int estoque;
}Produtos;

int main(int argc, char const *argv[]) {

        void valor_total(Produtos x[MAX]);
        void maior_estoque(Produtos x[MAX]);

        Produtos produto[MAX];

        for (int i = 0; i < MAX; i++) {
                scanf("%d\n", &produto[i].codigo);
                scanf("%lf\n", &produto[i].preco);
                scanf("%d", &produto[i].estoque);
                getchar();
        }

        valor_total(produto);
        maior_estoque(produto);

        return 0;
}

void valor_total(Produtos x[MAX]) {

        double total[MAX];

        for (int i = 0; i < MAX; i++) {
                total[i] = x[i].preco * x[i].estoque;
        }

        for (int i = 0; i < MAX; i++) {
                printf("Valor total do produto %d°: %.2lf\n", i + 1,total[i]);
        }

}

void maior_estoque(Produtos x[MAX]) {

        int maior = 0;

        for (int i = 0; i < MAX; i++) {
                if (maior < x[i].estoque) {
                        maior = i;
                }
        }

        printf("O codigo do maior valor em estoque: %d\n", x[maior].codigo);
}
