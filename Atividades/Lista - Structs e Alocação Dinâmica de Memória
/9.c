#include <stdio.h>
#include <math.h>
 
struct Complex {
        float real;
        float imaginaria;
};
 
struct RaizEqu2 {
        float x1;
        float x2;
};
 
int main(int argc, char const *argv[]) {
 
        void complex_print(struct Complex c);
        struct RaizEqu2 calcula_raiz_equ_2( float a, float b, float c);
 
        struct Complex complexo;
        struct RaizEqu2 raizes;
        float a, b, c;
 
        scanf("%f %f %f", &a, &b, &c);
        raizes = calcula_raiz_equ_2(a, b, c);
 
        if (raizes.x1 < 0) {
                printf("x1 = %.2f\n", raizes.x1);
                printf("x2 = %.2f\n", raizes.x2);
        }else {
                complex_print(complexo);
        }
 
        return 0;
}
 
struct RaizEqu2 calcula_raiz_equ_2( float a, float b, float c){
 
        void complex_print(struct Complex c);
        struct RaizEqu2 raizes;
        float x1, x2, delta;
 
        delta = sqrt(pow(b, 2) - 4 * c * a);
        raizes.x1 = (- b + delta) / (2 * a);
        raizes.x2 = (- b - delta) / (2 * a);
 
        return raizes;
}
 
 
void complex_print(struct Complex c) {
 
        printf("x1 = i\n");
        printf("x2 = -i\n");
 
}
