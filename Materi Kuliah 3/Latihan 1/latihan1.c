#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[50];
    int angka;

    while (1) {
        printf("Masukkan angka (ketik 'Malas' untuk keluar): ");
        scanf("%s", input);

        // cek kalau user ketik "Malas"
        if (strcmp(input, "Malas") == 0) {
            printf("Program selesai.\n");
            break;
        }

        // ubah string ke integer
        angka = atoi(input);

        if (angka % 2 == 0) {
            printf("Bilangan Genap\n");
        } else {
            printf("Bilangan Ganjil\n");
        }
    }

    return 0;
}