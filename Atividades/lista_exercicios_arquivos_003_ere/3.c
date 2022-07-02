#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

        FILE *entrada, *saida;
        char string[100], *str, *nota1, *nota2, *nota3;
        char nome1[40], nome2[40];
        char aluno[40];
        double num1, num2, num3;
        double num[3];
        double meno;

        scanf("%s %s\n", nome1, nome2);

        entrada = fopen(nome1, "w");

        scanf("%[^\n]\n %lf %lf %lf", aluno, &num1, &num2, &num3);

        fprintf(entrada, "%s, %.2lf, %.2lf, %.2lf", aluno, num1, num2, num3);

        fclose(entrada);

        entrada = fopen(nome1, "r");
        saida = fopen(nome2, "w");

        while (fgets(string, 100, entrada) != NULL) {
                str = strtok(string, ",");
                nota1 = strtok(NULL, ", ");
                num[0] = atof(nota1);
                nota2 = strtok(NULL, ", ");
                num[1] = atof(nota2);
                nota3 = strtok(NULL, ", ");
                num[2] = atof(nota3);
        }

        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 2; j++) {
                        if (num[i] < num[j]) {
                                meno = num[j];
                                num[j] = num[i];
                                num[i] = meno;
                        }
                }
        }

        fprintf(saida,"%s %.2lf %.2lf %.2lf\n", aluno,num[0], num[1], num[2]);

        return 0;
}
