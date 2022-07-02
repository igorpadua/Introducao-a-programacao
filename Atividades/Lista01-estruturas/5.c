#include <stdio.h>

typedef struct {
        int n_matricula;
        int data_nascimento;
        double salario;
}Funcionario;

int main(int argc, char const *argv[]) {

        void media_salario(Funcionario x[10]);
        void imprimi(Funcionario x[10]);
        
        Funcionario funcionario[10];

        for (int i = 0; i < 10; i++) {
                scanf("%d\n", &funcionario[i].n_matricula);
                scanf("%d\n", &funcionario[i].data_nascimento);
                scanf("%lf", &funcionario[i].salario);
                getchar();
        }

        imprimi(funcionario);
        media_salario(funcionario);

        return 0;
}

void imprimi(Funcionario x[10]) {

        for (int i = 0; i < 10; i++) {
                printf("Número da matricula: %d\n", x[i].n_matricula);
                printf("Data do nascimento: %d\n", x[i].data_nascimento);
                printf("Salario: %.2lf\n", x[i].salario);
        }
}

void media_salario(Funcionario x[10]) {

        double soma, media;

        for (int i = 0; i < 10; i++) {
                soma += x[i].salario;
        }
        media = soma / 10;

        printf("Média salarial: %.2lf\n", media);
}
