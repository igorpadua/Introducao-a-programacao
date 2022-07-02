#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
        char string[30];
}Saida;

int main(int argc, char const *argv[]) {

        Saida *st;
        FILE *entrada, *saida;
        char str[30];
        int x = 0, tam;

        entrada = fopen("entrada.txt", "r");

        st = (Saida*) malloc(30 * sizeof(Saida));

        while (fgets(str, 30, entrada) != NULL) {
                strcpy(st[x++].string, str);
        }
        fclose(entrada);

        saida = fopen("saida.txt","w");

        for (int i = x -1; i >= 0; i--) {
                tam = strlen(st[i].string);
                for (int j = tam; j >= 0; j--) {
                        if (st[i].string[j] != '\0' && st[i].string[j] != '\n') {
                                fprintf(saida, "%c", st[i].string[j]);
                        }
                }
                fprintf(saida, "\n");
        }

        fclose(saida);

        return 0;
}
