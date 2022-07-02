/*
   Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
   juntamente com o maior, o menor e a média dos valores.
 */

#include <stdio.h>
#define MAX 5

int main(int argc, char const *argv[]) {

        int maior(int v[], int ele);
        int menor(int v[], int ele);
        int media(int v[], int ele);

        int vetor[MAX];
        int maio, meno, medi;

        for (int i = 0; i < MAX; i++) {
                scanf("%d", &vetor[i]);
        }

        maio = maior(vetor, MAX);
        meno = menor(vetor, MAX);
        medi = media(vetor, MAX);

        printf("O maior é %d, o menor é %d, a media é %d\n", maio, meno, medi);

        return 0;
}

int maior(int v[], int ele){

        int maio = v[0];

        for (int i = 0; i < ele; i++) {
                if (maio < v[i]) {
                        maio = v[i];
                }
        }

        return maio;
}

int menor(int v[], int ele){

        int meno = v[0];

        for (int i = 0; i < ele; i++) {
                if (meno > v[i]) {
                        meno = v[i];
                }
        }

        return meno;
}

int media(int v[], int ele){

        int medi = 0;

        for (int i = 0; i < ele; i++) {
                medi += v[i];
        }

        return medi / ele;
}
