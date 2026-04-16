#include <stdio.h>
#include <math.h>

int main() {
    int pilihan;
    double a, b, hasil;

    while (1) {
        printf("\n1. Tambah\n2. Pangkat\n3. Akar\n4. Keluar\nPilih: ");

        if (scanf("%d", &pilihan) != 1) {
            printf("Input tidak valid!\n");
            break;
        }

        if (pilihan == 4) break;

        if (pilihan == 1) {
            printf("Masukkan dua angka: ");
            scanf("%lf %lf", &a, &b);
            hasil = a + b;
        } 
        else if (pilihan == 2) {
            printf("Masukkan angka dan pangkat: ");
            scanf("%lf %lf", &a, &b);
            hasil = pow(a, b);
        } 
        else if (pilihan == 3) {
            printf("Masukkan angka: ");
            scanf("%lf", &a);
            hasil = sqrt(a);
        }

        printf("Hasil: %.2lf\n", hasil);
    }

    return 0;
}