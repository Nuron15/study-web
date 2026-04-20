#include <stdio.h>

void cetakTabelPerkalian(int n) {
    int i = 1, j;

    printf("Tabel Perkalian %dx%d:\n", n, n);
    printf("   ");
    j = 1;
    while (j <= n) {
        printf("%4d", j);
        j++;
    }
    printf("\n");

    printf("   ");
    j = 1;
    while (j <= n) {
        printf("____");
        j++;
    }
    printf("\n");

    while (i <= n) {
        printf("%2d |", i);
        j = 1;
        while (j <= n) {
            printf("%4d", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
}

int main() {
    int ukuran;
    char lagi = 'y';

    while (lagi == 'y' || lagi == 'Y') {
        printf("Masukkan ukuran tabel perkalian: ");
        if (scanf("%d", &ukuran) != 1 || ukuran <= 0) {
            printf("Input tidak valid. Masukkan angka positif.\n");
            return 1;
        }

        cetakTabelPerkalian(ukuran);

        printf("Ingin cetak lagi? (y/n): ");
        scanf(" %c", &lagi);
    }

    return 0;
}