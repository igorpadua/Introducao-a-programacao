/*
   1 Escreva um programa na linguagem de programação C, que possua:
   1.1 uma função que receba 3 notas de um aluno e retorne uma letra que caracteriza a
   sua média, da seguinte forma:
   ◦ Se a média do aluno estiver entre 9.00 e 10.00 a função deve-se retornar A;
   ◦ Se a média do aluno estiver entre 7,00 e 8,99 a função deve retornar B;
   ◦ Se a média do aluno estiver entre 5,00 e 6,99 a função deve retornar C;
   O valor da média deve ser impresso na tela.
 */

#include <stdio.h>

int main(void) {

        char medias(double media);
        double nota1, nota2, nota3;
        char letra;
        double media;

        printf("Digite a 1° nota do aluno\n");
        scanf("%lf", &nota1);
        printf("Digite a 2° nota do aluno\n");
        scanf("%lf", &nota2);
        printf("Digite a 3° nota do aluno\n");
        scanf("%lf", &nota3);

        media = (nota1 + nota2 + nota3) / 3;
        letra = medias(media);

        printf("\nNota: %c e a média do aluno foi %.2lf\n", letra, media);

        return 0;
}

char medias(double media){

        if (media >= 9 && media <= 10) {
                return 'A';
        } if (media >= 7 && media <= 8.99) {
                return 'B';
        } if (media >= 5 && media <= 6.99) {
                return 'C';
        }
        return 0;
}
