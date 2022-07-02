// Recebe uma string e duplica o seu conteúdo.

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

        char *strdublica(char *s);

        char palavra[50];

        puts("Digite uma palavra ou frase:");
        fgets(palavra, 50, stdin);
        printf("A duplicada: %s\n", strdublica(palavra));
        return 0;
}

char *strdublica(char *s) {

        int n = strlen(s);
        char passar[n];
        int x = 0;

        for (int i = 0; i < n; i++) {
                passar[i] = s[i];
        }

        for (int i = n - 1; i < (n * 2) - 2; i++) {
                s[i] = s[x];
                x++;
        }

        s[n * 2] = '\0';

        return s;
}
