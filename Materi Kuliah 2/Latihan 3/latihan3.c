#include <stdio.h>

int main() {
    float meter, cm;

    printf("Masukkan panjang (meter): ");
    scanf("%f", &meter);

    cm = meter * 100;

    printf("Hasil: %.2f cm\n", cm);

    return 0;
}