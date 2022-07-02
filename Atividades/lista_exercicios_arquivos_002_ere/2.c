#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

        void vogal(char c[100], FILE *arq);
        FILE *arq;
        FILE *arqui;
        char c, string[100];
        int i = 0;
        int num;
        char vogais[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        arq = fopen("arq.txt", "r");
        arqui = fopen("arquivo.txt", "w");

        while (fgets(string, 100, arq) != NULL) {
                num = strlen(string);
                for (int i = 0; i < num; i++) {
                        for (int j = 0; j < 10; j++) {
                                if (string[i] == vogais[j]) {
                                        string[i] = '*';
                                }
                        }
                }
                fprintf(arqui, "%s", string);
        }

        fclose(arq);
        fclose(arqui);

        return 0;
}
