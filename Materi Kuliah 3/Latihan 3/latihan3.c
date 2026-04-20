#include <stdio.h>

float luasLingkaran(float r) {
    return 3.14 * r * r;
}

int main() {
    float r, hasil;

    printf("Masukkan jari-jari: ");
    scanf("%f", &r);

    hasil = luasLingkaran(r);

    printf("Luas lingkaran: %.2f\n", hasil);

    return 0;
}