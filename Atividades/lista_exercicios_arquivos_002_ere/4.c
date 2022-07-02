#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

        FILE *arq, *arqui, *arquivo;
        char string[100];

        arq = fopen("arq.txt", "r");
        arquivo = fopen("arquivo2.txt", "w");

        while (fgets(string, 100, arq) != NULL) {
                fprintf(arquivo, "%s", string);
        }
        fclose(arq);

        arqui = fopen("arquivo.txt", "r");
        while (fgets(string, 100, arqui) != NULL) {
                fprintf(arquivo, "%s", string);
        }
        fclose(arqui);
        fclose(arquivo);

        return 0;
}
