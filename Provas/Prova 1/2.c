/*
   Faça um algoritmo que leia uma data no formato ddmmaaaa usando um três números inteiros.
   Escreva a mesma data no formato dia/mês/ano, <dia> de <mês por extenso> de <ano>. O programa
   deve verificar se o número informado representa uma data válida. Caso não seja, imprimir na tela a
   mensagem "Data invalida!". Considere que o ano em questão nunca é bissexto, ou seja, fevereiro tem
   somente 28 dias.
   Entrada
   Um número inteiro positivo com 8 dígitos.
   Saída
   O programa deve apresentar a transcrição da data no formado "dd de mês por extenso de aa".

 */

#include <stdio.h>


int main(int argc, char const *argv[]) {

        int data, ano, dia, mes;

        scanf("%d", &data);

        dia = data / 1000000;
        data %= 1000000;
        mes = data / 10000;
        data %= 10000;
        ano = data;

        if (mes == 2 &&  dia > 28)
                printf("Data invalida");
        else if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12)) {
                printf("%d de ", dia);

                if (mes == 01) {
                        printf("janeiro de ");
                }else if (mes == 2) {
                        printf("fevereiro de ");
                }else if (mes == 3) {
                        printf("março de ");
                }else if (mes == 4) {
                        printf("abril de ");
                }else if (mes == 5) {
                        printf("maio de ");
                }else if (mes == 6) {
                        printf("junho de ");
                }else if (mes == 7) {
                        printf("julho de ");
                }else if (mes == 8) {
                        printf("agosto de ");
                }else if (mes == 9) {
                        printf("setembro de ");
                }else if (mes == 10) {
                        printf("outubro de ");
                }else if (mes == 11) {
                        printf("novembro de ");
                }else if (mes == 12) {
                        printf("dezembro de ");
                }
                printf("%d\n", ano);
        }else {
                printf("Data invalida!\n");
        }

        return 0;
}
