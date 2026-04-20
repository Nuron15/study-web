#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

double mean(const int arr[], int n) {
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

double median(const int arr[], int n) {
    if (n % 2 == 1) {
        return arr[n / 2];
    } else {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
}

void print_mode(const int arr[], int n) {
    int maxCount = 1;
    int currentCount = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
            currentCount = 1;
        }
    }
    if (currentCount > maxCount) {
        maxCount = currentCount;
    }

    if (maxCount == 1) {
        printf("Mode: tidak ada (semua nilai muncul 1 kali)\n");
        return;
    }

    printf("Mode: ");
    currentCount = 1;
    int first = 1;

    for (int i = 1; i <= n; i++) {
        if (i < n && arr[i] == arr[i - 1]) {
            currentCount++;
        } else {
            if (currentCount == maxCount) {
                if (!first) printf(", ");
                printf("%d", arr[i - 1]);
                first = 0;
            }
            currentCount = 1;
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Masukkan jumlah data N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("N harus lebih dari 0.\n");
        return 0;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Gagal alokasi memori.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);

    printf("\nHasil:\n");
    printf("Mean   : %.2f\n", mean(arr, n));
    printf("Median : %.2f\n", median(arr, n));
    print_mode(arr, n);

    free(arr);
    return 0;
}