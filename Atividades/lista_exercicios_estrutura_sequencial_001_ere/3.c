#include <stdio.h>

int main(int argc, char const *argv[]) {

        double taxa_fixa, taxa_km, dias, km_rodados, valor_total, desconto;

        printf("Digite a taxa fixa por dia\n");
        scanf("%lf", &taxa_fixa);
        printf("Digite a taxa por quilometro rodados\n");
        scanf("%lf", &taxa_km);
        printf("Digite o número de dias\n");
        scanf("%lf", &dias);
        printf("Digite o número de quilometros rodados\n");
        scanf("%lf", &km_rodados);

        desconto = (taxa_fixa * dias) * 0.1;
        valor_total = (taxa_fixa * dias) + (taxa_km * km_rodados);

        printf("O valor total do alugem é de R$ %.2lf\n", valor_total - desconto);
        printf("O valor do desconto é de R$ %.2lf \n", desconto);
        printf("O numero de dias é de %.1lf\n", dias);
        printf("A quilometragem rodada foi de %.2lf quilometros\n", km_rodados);

        return 0;
}
