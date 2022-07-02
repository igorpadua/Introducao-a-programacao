#include <stdio.h>

int main(int argc, char const *argv[]) {

        double peso_peixe, excesso, multa;

        printf("Digite o peso do peixe\n");
        scanf("%lf", &peso_peixe);
        if (peso_peixe <= 50) {
          printf("Não sera preciso pagar multa,pois não excede os 50 quilos.\n");
        }else {
        excesso = peso_peixe - 50;
        multa = excesso * 4;
        printf("O quilo do peixe excedeu %.2lf quilos\n", excesso);
        printf("A multa é de: R$ %lf\n", multa);
        }

        return 0;
}
