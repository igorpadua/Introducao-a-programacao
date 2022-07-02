#include <stdio.h>

int main(int argc, char const *argv[]) {

        int consoante(char x);
        int vogal(char c);
        FILE *arquivo;
        char c;
        int cont = 0, voga = 0;

        arquivo = fopen("Arquivo de texto.txt", "r");

        while (!feof(arquivo)) {
                c = getc(arquivo);
                if (vogal(c) == 0) {
                        voga++;
                }
                if (consoante(c) == 0) {
                        cont++;
                }
        }

        cont -= voga;

        fclose(arquivo);

        printf("vogais = %d\n", voga);
        printf("consoantes = %d\n", cont);

        return 0;
}

int vogal(char c) {

        char vogais[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        for (int i = 0; i < 10; i++) {
                if (c == vogais[i]) {
                        return 0;
                }
        }

        return 1;
}

int consoante(char x) {

        if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {
                return 0;
        }

        return 1;
}
