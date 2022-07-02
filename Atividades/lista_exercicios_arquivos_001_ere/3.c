#include <stdio.h>

int main(int argc, char const *argv[]) {

        FILE *arquivo;
        char ca;
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0,
            k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0,
            u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;

        arquivo = fopen("Arquivo de texto.txt", "r");

        while (!feof(arquivo)) {
                ca = getc(arquivo);

                if (ca == 'A' || ca == 'a') {
                        a++;
                }
                if (ca == 'B' || ca == 'b') {
                        b++;
                }
                if (ca == 'C' || ca == 'c') {
                        c++;
                }
                if (ca == 'D' || ca == 'd') {
                        d++;
                }
                if (ca == 'E' || ca == 'e') {
                        e++;
                }
                if (ca == 'F' || ca == 'f') {
                        f++;
                }
                if (ca == 'G' || ca == 'g') {
                        g++;
                }
                if (ca == 'H' || ca == 'h') {
                        h++;
                }
                if (ca == 'I' || ca == 'i') {
                        i++;
                }
                if (ca == 'J' || ca == 'j') {
                        j++;
                }
                if (ca == 'K' || ca == 'k') {
                        k++;
                }
                if (ca == 'L' || ca == 'l') {
                        l++;
                }
                if (ca == 'M' || ca == 'm') {
                        m++;
                }
                if (ca == 'N' || ca == 'n') {
                        n++;
                }
                if (ca == 'O' || ca == 'o') {
                        o++;
                }
                if (ca == 'P' || ca == 'p') {
                        p++;
                }
                if (ca == 'Q' || ca == 'q') {
                        q++;
                }
                if (ca == 'R' || ca == 'r') {
                        r++;
                }
                if (ca == 'S' || ca == 's') {
                        s++;
                }
                if (ca == 'T' || ca == 't') {
                        t++;
                }
                if (ca == 'U' || ca == 'u') {
                        u++;
                }
                if (ca == 'V' || ca == 'v') {
                        v++;
                }
                if (ca == 'W' || ca == 'w') {
                        w++;
                }
                if (ca == 'X' || ca == 'x') {
                        x++;
                }
                if (ca == 'Y' || ca == 'y') {
                        y++;
                }
                if (ca == 'Z' || ca == 'z') {
                        z++;
                }
        }

        fclose(arquivo);

        printf("a = %d\n", a);
        printf("b = %d\n", b);
        printf("c = %d\n", c);
        printf("d = %d\n", d);
        printf("e = %d\n", e);
        printf("f = %d\n", f);
        printf("g = %d\n", g);
        printf("h = %d\n", h);
        printf("i = %d\n", i);
        printf("j = %d\n", j);
        printf("k = %d\n", k);
        printf("l = %d\n", l);
        printf("m = %d\n", m);
        printf("n = %d\n", n);
        printf("o = %d\n", o);
        printf("p = %d\n", p);
        printf("q = %d\n", q);
        printf("r = %d\n", r);
        printf("s = %d\n", s);
        printf("t = %d\n", t);
        printf("u = %d\n", u);
        printf("v = %d\n", v);
        printf("w = %d\n", w);
        printf("x = %d\n", x);
        printf("y = %d\n", y);
        printf("z = %d\n", z);

        return 0;
}
