/*
   Escreva um algoritmo em Linguagem C que leia um número inteiro (maior que zero e de no máximo
   4 dígitos), imprima na tela quantas unidades de milhar, centenas, dezenas e unidades formam o
   número e a qual ordem o número pertence.
   Entrada
   O programa deve ler um número inteiro.
   Saída
   O algoritmo deve imprimir a mensagem “Numero invalido!” se o número não está dentro do
   intervalo estabelecido e, caso seja válido, realizar a decomposição do número e decidir se as palavras
   devem ser impressas no singular ou no plural. Caso a quantidade de uma ordem seja 0, o algoritmo
   não deve imprimir a quantidade da ordem. O algoritmo deve reproduzir fielmente os exemplos
   abaixo.
 */

 #include <stdio.h>

int main(int argc, char const *argv[]) {

        int numero, milhar, centena, dezena, unidade, numero1;

        scanf("%d", &numero);

        numero1 = numero;
        milhar = numero / 1000;
        numero %= 1000;
        centena = numero / 100;
        numero %= 100;
        dezena = numero / 10;
        numero %= 10;
        unidade = numero;

        if (numero1 > 0 && numero1 < 10000) {

                if (milhar != 0) {
                        printf("(quarta ordem) ");
                }else if (centena != 0) {
                        printf("(terceira ordem) ");
                }else if (dezena != 0) {
                        printf("(segunda ordem) ");
                }else {
                        printf("(primeira ordem) ");
                }

                printf("%d = ", numero1);
                if (milhar >= 1) {
                        if (milhar >= 1 && milhar <= 1.999) {
                                printf("%d unidade de milhar", milhar);
                        }else {
                                printf("%d unidades de milhar", milhar);
                        }
                }
                if (milhar >= 1 && centena >= 1 || (milhar >= 1 && dezena >= 1))
                        printf(" + ");

                if (centena >= 1) {
                        if (centena >= 1 && numero <= 1.99) {
                                printf("%d centena", centena);
                        }else {
                                printf("%d centenas", centena);
                        }
                }
                if (centena >= 1 && dezena >= 1 || (unidade >= 1 && centena >= 1))
                        printf(" + ");

                if (dezena >= 1) {
                        if (dezena >= 1 && dezena <= 1.9) {
                                printf("%d dezena", dezena);
                        }else {
                                printf("%d dezenas", dezena);
                        }
                }
                if (unidade >= 1 && dezena >= 1)
                        printf(" + ");

                if (unidade > 0) {
                        if (unidade == 1) {
                                printf("%d unidade", unidade);
                        }else {
                                printf("%d unidades", unidade);
                        }
                }
                printf(" = ");

                if (milhar >= 1)
                        printf("%d000", milhar);
                if (milhar >= 1 && centena >= 1)
                        printf(" + ");

                if (centena >= 1)
                        printf("%d00", centena);
                if (centena >= 1 && dezena >= 1 || (milhar >= 1 && dezena >= 1))
                        printf(" + ");

                if (dezena >= 1)
                        printf("%d0", dezena);
                if (unidade >= 1 && dezena >= 1 || (unidade >= 1 && centena >= 1))
                        printf(" + ");

                if (unidade >= 1)
                        printf("%d", unidade);

                printf("\n");
        }else {
                printf("Numero invalido!\n");
        }

        return 0;
}
