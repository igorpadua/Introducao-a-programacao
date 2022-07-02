// Subsitui todos os caracteres da string s por espaços em branco.

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

        char *allspaces(char *s);

        char palavra[50];

        puts("Digite uma palavra ou frase:");
        fgets(palavra, 50, stdin);

        printf("Em espaços em branco:\"%s\"\n", allspaces(palavra));

        return 0;
}

char *allspaces(char *s) {

        int n = strlen(s);

        for (int i = 0; i < n; i++) {
                s[i] = ' ';
        }
        s[n - 1] = '\0';
        return s;
}
