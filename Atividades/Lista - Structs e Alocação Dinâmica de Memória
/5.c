#include <stdio.h>
#include <math.h>
 
typedef struct {
        double u;
        double x;
        double y;
        double z;
}Ponto;
 
int main(int argc, char const *argv[]) {
 
        int n, i;
        Ponto num[1001];
        double distancia[1001];
 
        scanf("%d\n", &n);
        for (i = 0; i < n; i++) {
                scanf("%lf %lf %lf %lf", &num[i].u, &num[i].x, &num[i].y, &num[i].z);
                getchar();
        }
 
        for (i = 0; i < n - 1; i++) {
                distancia[i] = sqrt(pow(num[i].u - num[i + 1].u, 2) + pow(num[i].x - num[i + 1].x, 2) + pow(num[i].y - num[i + 1].y, 2) + pow(num[i].z - num[i + 1].z, 2));
        }
 
        for (i = 0; i < n - 1; i++) {
                printf("%.2lf\n", distancia[i]);
        }
 
        return 0;
} 
