#include <stdio.h>
#include <string.h>
#include "string_utils.h"

int main() {
    char teks[256];
    char salinan[256];

    printf("Masukkan teks: ");
    fgets(teks, sizeof(teks), stdin);

    teks[strcspn(teks, "\n")] = '\0';
    strcpy(salinan, teks);

    printf("\nHasil reverse     : ");
    reverse(salinan);
    printf("%s\n", salinan);

    printf("Palindrome        : %s\n", is_palindrome(teks) ? "Ya" : "Tidak");

    strcpy(salinan, teks);
    to_upper(salinan);
    printf("Huruf besar semua : %s\n", salinan);

    return 0;
}