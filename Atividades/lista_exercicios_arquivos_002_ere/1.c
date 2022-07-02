#include <stdio.h>

int main(int argc, char const *argv[]) {

        FILE *arqui;
        char c[100];
        char a;

        arqui = fopen("arq.txt", "w");
        puts("Informe o conteudo do arquivo:");
        a = getchar();
        while (a != '0') {
                fputc(a, arqui);
                a = getchar();
        }
        fclose(arqui);

        arqui = fopen("arq.txt", "r");

        while (fgets(c, 100, arqui) != NULL) {
                printf("%s", c);
        }

        fclose(arqui);

        return 0;
}
