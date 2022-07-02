#include <stdio.h>

int main(int argc, char const *argv[]) {

        int pao, broa;
        double arrecadado;

        printf("Digite qualtos pães foram vendidos\n");
        scanf("%d", &pao);
        printf("Digite qualtas broas foram vendidos\n");
        scanf("%d", &broa);

        arrecadado = pao * 0.12 + broa + 1.50;

        printf("Foram vendidos no total R$ %.2lf pães e broas\n", arrecadado);
        printf("Você deve guardar R$ %.2lf\n", arrecadado * 0.1);

        return 0;
}
