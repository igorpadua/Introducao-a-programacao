// Devolve o n_esimo caractere da string s

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

        char n_esimo(char *s, int n);

        char palavra[50];
        int n;

        puts("Digite uma palavra ou frase:");
        fgets(palavra, 50, stdin);

        puts("Qual o número da letra que você quer ver:");
        scanf("%d", &n);

        printf("A letra é: %c\n", n_esimo(palavra, n));

        return 0;
}

char n_esimo(char *s, int n) {

        char c;
        int i;

        i = strlen(s);

        if (n < i) {
                c = s[n - 1];
        }

        return c;
}
