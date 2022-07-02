// Recebe uma string e coloca toda a primeira metade em minusculas e a segunda metade em MAIÚSCULAS.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {

        char *Transform(char *s);

        char palavra[50];

        puts("Digite uma palavra ou frase:");
        fgets(palavra, 50, stdin);
        printf("%s\n", Transform(palavra));

        return 0;
}

char *Transform(char *s) {

        int n = strlen(s);

        for (int i = 0; i < n / 2; i++) {
                s[i] = tolower(s[i]);
        }

        for (int i = n / 2; i < n; i++) {
                s[i] = toupper(s[i]);
        }

        return s;
}
