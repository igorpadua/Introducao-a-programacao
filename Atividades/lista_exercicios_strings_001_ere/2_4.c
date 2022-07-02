// Coloca todos os caracteres de str em mínusculo

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {

        char *strlwr(char *str);

        char nome[50];

        fgets(nome, 50, stdin);

        printf("%s\n", strlwr(nome));

        return 0;
}

char *strlwr(char *str) {

        int n = strlen(str);

        for (int i = 0; i < n; i++) {
                str[i] = tolower(str[i]);
        }

        return str;
}
