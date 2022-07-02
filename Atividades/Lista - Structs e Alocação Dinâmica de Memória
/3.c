#include <stdio.h>
#include <math.h>
 
typedef struct {
        double u;
        double x;
        double y;
        double z;
        double norma;
}Numero;
 
int main(int argc, char const *argv[]) {
 
        Numero numero[1000];
        int n, i, j;
        double soma[1000], aux, aux1, aux2, aux3, aux4;
 
        scanf("%d\n", &n);
        for (i = 0; i < n; i++) {
                scanf("%lf %lf %lf %lf", &numero[i].u, &numero[i].x, &numero[i].y, &numero[i].z);
                getchar();
        }
 
        // Soma
        for (i = 0; i < n; i++) {
                soma[i] = pow(numero[i].u, 2) + pow(numero[i].x, 2) + pow(numero[i].y, 2) + pow(numero[i].z, 2);
                numero[i].norma = sqrt(soma[i]);
        }
 
        // Ordenar
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        if (numero[i].norma < numero[j].norma) {
                                // Norma
                                aux = numero[i].norma;
                                numero[i].norma = numero[j].norma;
                                numero[j].norma = aux;
                                // U
                                aux1 = numero[i].u;
                                numero[i].u = numero[j].u;
                                numero[j].u = aux1;
                                // X
                                aux2 = numero[i].x;
                                numero[i].x = numero[j].x;
                                numero[j].x = aux2;
                                // Y
                                aux3 = numero[i].y;
                                numero[i].y = numero[j].y;
                                numero[j].y = aux3;
                                // Z
                                aux4 = numero[i].z;
                                numero[i].z = numero[j].z;
                                numero[j].z = aux4;
                        }
                }
        }
 
        for (i = 0; i < n; i++) {
                printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", numero[i].u, numero[i].x, numero[i].y, numero[i].z, numero[i].norma);
        }
 
        return 0;
}
