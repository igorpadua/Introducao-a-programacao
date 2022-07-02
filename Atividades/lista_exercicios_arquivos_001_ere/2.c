#include <stdio.h>

int main(int argc, char const *argv[]) {

        int caractere(char c);
        FILE *arquivo;
        char c;
        int cont = 0;

        arquivo = fopen("Arquivo de texto.txt", "r");

        while (!feof(arquivo)) {

                c = getc(arquivo);

                if (caractere(c) == 0) {
                        cont++;
                }

        }

        fclose(arquivo);

        printf("caractere = %d\n", cont);

        return 0;
}

int caractere(char c) {

        if ((c >= '!' && c <= '/') || (c >= ':' && c <= '@')) {
                return 0;
        }

        return 1;
}
