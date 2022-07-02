/*Escreva um programa que:
   • Declare um inteiro, um real (ponto flutuante) e um char;
   • Declare ponteiros para inteiro, real, e char.
   • Associe as variáveis aos ponteiros (use &).
   • Modifique os valores de cada variável usando os ponteiros.
   • Imprima os valores das variáveis antes e após a modificação.
   Entrada
   O programa deve ler os três valores informados pelo usuário, todos na mesma linha. Por exemplo: 50
   35.25 G
   Saída
   O programa deve imprimir oito linhas contendo o seguinte formato:
   Valores antes da alteração:
   inteiro = 50
   real: 35.25
   char: G
   Valores após a alteração:
   inteiro: 85
   real: 45.36
   char: j
 */

 #include <stdio.h>

int main(int argc, char const *argv[]) {

        int inteiro, *pinteiro;
        double flutuante, *pflutuante;
        char letra, *pletra;

        pinteiro = &inteiro;
        pflutuante = &flutuante;
        pletra = &letra;

        scanf("%d %lf %c", pinteiro, pflutuante, pletra);

        printf("Valores antes da alteração\n");
        printf("inteiro = %d\n", inteiro);
        printf("real = %.2lf\n", flutuante);
        printf("char = %c\n", letra);

        *pinteiro += 35;
        *pflutuante += 10.11;
        *pletra += 3;

        printf("Valores após a alteração\n");
        printf("inteiro = %d\n", inteiro);
        printf("real = %.2lf\n", flutuante);
        printf("char = %c\n", letra);

        return 0;
}
