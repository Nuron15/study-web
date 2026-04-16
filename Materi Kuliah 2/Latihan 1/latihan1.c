#include <stdio.h>

int main() {
    float r, luas;

    printf("Masukkan jari-jari: ");
    scanf("%f", &r);

    luas = 3.14 * r * r;

    printf("Luas lingkaran: %.2f\n", luas);

    return 0;
}