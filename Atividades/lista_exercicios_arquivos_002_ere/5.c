#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {

        FILE *arq, *arqui;
        char string[100], cidade[40];
        char *str;
        int num;
        int maior = 0;

        arq = fopen("arq.txt", "r");
        arqui = fopen("maior.txt", "w");


        while (fgets(string, 100, arq) != NULL) {
                str = strtok(string, ",");
                str = strtok(NULL, ", ");
                num = atoi(str);
                if (maior < num) {
                        strcpy(cidade, string);
                        fprintf(arqui, "%s, ", cidade);
                        maior = num;
                        fprintf(arqui, "%d", maior);
                }
        }

        fclose(arq);
        fclose(arqui);

        return 0;
}
