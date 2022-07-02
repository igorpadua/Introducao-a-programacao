// Torna a string s vazia

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

        char *init_str(char *s);

        char palavra[50];

        puts("Digite uma palavra ou frase:");
        fgets(palavra, 50, stdin);

        printf("String antes de vazia: %s\n", palavra);
        init_str(palavra);
        printf("String depois: %s\n", palavra);

        return 0;
}

char *init_str(char *s) {

        int n = strlen(s);

        *s = '\0';

        return s;
}
