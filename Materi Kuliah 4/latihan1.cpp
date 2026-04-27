#include <iostream>
using namespace std;

int main() {
    int angka[10];
    int terbesar;

    for (int i = 0; i < 10; i++) {
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> angka[i];
    }

    terbesar = angka[0];
    for (int i = 1; i < 10; i++) {
        if (angka[i] > terbesar) {
            terbesar = angka[i];
        }
    }

    cout << "Angka terbesar adalah: " << terbesar << endl;
    return 0;
}