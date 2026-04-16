#include <stdio.h>

int main() {
    int sisi, keliling;

    printf("Masukkan panjang sisi: ");
    fflush(stdout); // memastikan teks tampil sebelum input

    if (scanf("%d", &sisi) != 1) {
        printf("Input tidak valid!\n");
        return 1;
    }

    keliling = 4 * sisi;

    printf("Keliling persegi = %d\n", keliling);

    return 0;
}