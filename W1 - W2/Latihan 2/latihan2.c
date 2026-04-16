#include <stdio.h>

int main() {
    float a, b;
    char op;

    while (1) {
        printf("Masukkan (contoh: 3 + 4) atau q untuk keluar: ");

        if (scanf(" %c", &op) && op == 'q') break;
        ungetc(op, stdin);

        scanf("%f %c %f", &a, &op, &b);

        switch(op) {
            case '+': printf("= %.2f\n", a+b); break;
            case '-': printf("= %.2f\n", a-b); break;
            case '*': printf("= %.2f\n", a*b); break;
            case '/': printf("= %.2f\n", a/b); break;
        }
    }
    return 0;
}