// Coloca em cada posição da string s o proximo caractere ASCII

#include <stdio.h>

int main(int argc, char const *argv[]) {

        char *Prox_Char(char *s);

        char palavra[50];

        puts("Escreva uma palavra ou frase:");
        fgets(palavra, 50, stdin);

        printf("%s\n", Prox_Char(palavra));

        return 0;
}

char *Prox_Char(char *s) {

        for (int i = 0; s[i] != '\0'; i++) {
                ++s[i];
        }

        return s;
}
