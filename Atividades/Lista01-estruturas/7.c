#include <stdio.h>
#define MAX 2

typedef struct {
        int idade;
        char sexo[10];
        double salario;
        int n_filho;
}Habitantes;

int main(int argc, char const *argv[]) {

        void media_salarial(Habitantes x[MAX]);
        void feminino(Habitantes x[MAX]);
        void filho2(Habitantes x[MAX]);

        Habitantes habitantes[MAX];

        for (int i = 0; i < MAX; i++) {
                scanf("%d\n", &habitantes[i].idade);
                scanf("%s\n", habitantes[i].sexo);
                scanf("%lf\n", &habitantes[i].salario);
                scanf("%d", &habitantes[i].n_filho);
                getchar();
        }

        media_salarial(habitantes);
        feminino(habitantes);
        filho2(habitantes);

        return 0;
}

void media_salarial(Habitantes x[MAX]) {

        double soma, media;

        for (int i = 0; i < MAX; i++) {
                soma += x[i].salario;
        }
        media = soma / MAX;

        printf("Média salarial: %.2lf\n", media);

}

void feminino(Habitantes x[MAX]) {

        int mulheres = 0;

        for (int i = 0; i < MAX; i++) {
                if (x[i].sexo[0] == 'f' || x[i].sexo[0] == 'F') {
                        mulheres++;
                }
        }

        printf("Sexo feminino: %d\n", mulheres);

}

void filho2(Habitantes x[MAX]) {

        double filho = 0;

        for (int i = 0; i < MAX; i++) {
                if (x[i].n_filho > 2) {
                        filho++;
                }
        }

        filho = (filho * 100) / MAX;

        printf("Porcentagem de mais de 2 filhos: %.2lf%%\n", filho);
}
