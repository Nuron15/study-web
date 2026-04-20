#include "string_utils.h"
#include <ctype.h>
#include <string.h>

void reverse(char *str) {
    if (str == NULL) return;

    size_t i = 0;
    size_t j = strlen(str);

    if (j == 0) return;
    j--;

    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int is_palindrome(const char *str) {
    if (str == NULL) return 0;

    size_t i = 0;
    size_t j = strlen(str);

    if (j == 0) return 1;
    j--;

    while (i < j) {
        while (i < j && !isalnum((unsigned char)str[i])) i++;
        while (i < j && !isalnum((unsigned char)str[j])) j--;

        if (tolower((unsigned char)str[i]) != tolower((unsigned char)str[j])) {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

void to_upper(char *str) {
    if (str == NULL) return;

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = (char)toupper((unsigned char)str[i]);
    }
}