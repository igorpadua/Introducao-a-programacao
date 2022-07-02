// Coloca os caracteres da strings s alternamente em maiusculas e minusculas

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {

        char *UpDown(char *s);

        char palavra[50];

        puts("Escreva uma palavra ou uma frase:");
        fgets(palavra, 50, stdin);

        printf("%s\n", UpDown(palavra));
        return 0;
}

char *UpDown(char *s) {

        int n = strlen(s);

        for (int i = 0; i < n; i += 2) {
                s[i] = toupper(s[i]);
        }

        return s;
}
