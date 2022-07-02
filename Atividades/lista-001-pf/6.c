/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que retorne
   o dobro dos dois números lidos. A função deverá armazenar o dobro de A na própria variável A e o dobro
   de B na própria variável B.
   Entrada
   O programa deve ler os dois valores informados pelo usuário, todos na mesma linha. Por exemplo: 85
   135
   Saída
   O programa deve imprimir uma linha no seguinte formato:
   O dobro dos valores de A e B são: 170 270.
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

        void dobrar(int *pa, int *pb);
        int a, b;
        int *pa, *pb;

        pa = &a;
        pb = &b;

        scanf("%d %d", &a, &b);

        dobrar(pa, pb);

        printf("O dobro dos valores A e B são: %d %d\n", *pa, *pb);

        return 0;
}

void dobrar(int *pa, int *pb) {

        *pa *= 2;
        *pb *= 2;
}
