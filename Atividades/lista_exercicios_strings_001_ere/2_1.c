// Devolve o n° de caracteres alfabéticos em s

#include <stdio.h>

int main(int argc, char const *argv[]) {

        int strcounta(char *s);

        char palavra[50];

        puts("Digite uma palavra ou frase");
        fgets(palavra, 50, stdin);

        printf("Tem %d caracteres alfabéticos\n", strcounta(palavra));

        return 0;
}

int strcounta(char *s) {

        int i = 0;
        int x = 0;
        while (s[i] != '\0') {
                if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                        i++;
                        x++;
                }else {
                        i++;
                }
        }

        return x;
}
