#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int level, max, tebakan, angka, percobaan = 0;
    int best = 9999;

    FILE *f = fopen("best_score.txt", "r");
    if (f != NULL) {
        fscanf(f, "%d", &best);
        fclose(f);
    }

    printf("Pilih level:\n1. Easy (1-10)\n2. Medium (1-100)\n3. Hard (1-1000)\n");
    scanf("%d", &level);

    if (level == 1) max = 10;
    else if (level == 2) max = 100;
    else max = 1000;

    srand(time(NULL));
    angka = rand() % max + 1;

    do {
        printf("Tebak angka: ");
        scanf("%d", &tebakan);
        percobaan++;

        if (tebakan > angka)
            printf("Terlalu besar!\n");
        else if (tebakan < angka)
            printf("Terlalu kecil!\n");

    } while (tebakan != angka);

    printf("Benar! Percobaan: %d\n", percobaan);

    if (percobaan < best) {
        printf("Best score baru!\n");
        f = fopen("best_score.txt", "w");
        fprintf(f, "%d", percobaan);
        fclose(f);
    }

    return 0;
}