#include <stdio.h>

int main() {
    FILE *fp = fopen("nilai.csv", "r");
    char nama[50];
    int nilai, total = 0, count = 0;
    int A=0, B=0, C=0, D=0, E=0;

    fscanf(fp, "%s\n", nama); // skip header

    while (fscanf(fp, "%[^,],%d\n", nama, &nilai) != EOF) {
        total += nilai;
        count++;

        if (nilai >= 80) A++;
        else if (nilai >= 70) B++;
        else if (nilai >= 60) C++;
        else if (nilai >= 50) D++;
        else E++;
    }

    printf("Rata-rata: %.2f\n", (float)total / count);
    printf("A:%d B:%d C:%d D:%d E:%d\n", A,B,C,D,E);

    fclose(fp);
    return 0;
}