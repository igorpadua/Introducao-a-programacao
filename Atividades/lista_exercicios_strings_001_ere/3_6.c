/*
   Devolve o caractere com maior código ASCII presente na string strr.
   Se strr estiver vazia, devolve '\0'.
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

        char Max_Ascii(char *strr);

        char palavra[50];

        puts("Digite uma palavra ou frase:");
        fgets(palavra, 50, stdin);

        printf("A caractere com maior código ASCII é: %c\n", Max_Ascii(palavra));


        return 0;
}

char Max_Ascii(char *strr) {

        int maior = strr[0];
        int n = strlen(strr);

        if (strr != NULL) {
                for (int i = 0; i < n; i++) {
                        if (maior < strr[i]) {
                                maior = strr[i];
                        }
                }
        }else {
                maior = '\0';
        }

        return maior;
}
