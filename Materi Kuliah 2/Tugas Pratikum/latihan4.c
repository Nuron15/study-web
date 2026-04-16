#include <stdio.h>

int main() {
    char nama[50];
    float tugas, uts, rata;

    printf("Masukkan nama: ");
    scanf(" %[^\n]", nama); // bisa pakai spasi

    printf("Masukkan nilai tugas: ");
    scanf("%f", &tugas);

    printf("Masukkan nilai UTS: ");
    scanf("%f", &uts);

    rata = (tugas + uts) / 2;

    printf("\nNama: %s\n", nama);
    printf("Rata-rata: %.2f\n", rata);

    return 0;
}