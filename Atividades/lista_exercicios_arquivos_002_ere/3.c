#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {

        FILE *arq, *arqui;
        char nome[100], nome2[100];
        char string[100];
        int num;

        scanf("%[^\n]", nome2);

        arq = fopen("arquivo.txt", "r");
        arqui = fopen(nome2, "w");

        while (fgets(string, 100, arq) != NULL) {
                num = strlen(string);
                for (int i = 0; i < num; i++) {
                        if (string[i] >= 'a' && string[i] <= 'z') {
                                string[i] = toupper(string[i]);
                        }
                }
                fprintf(arqui, "%s", string);
        }

        fclose(arq);
        fclose(arqui);

        return 0;
}
