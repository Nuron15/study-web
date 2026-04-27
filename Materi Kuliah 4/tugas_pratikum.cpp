#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Karyawan {
    string nama;
    string jabatan;
    float gaji;
};

int main() {
    int n;

    cout << "Masukkan jumlah karyawan: ";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Karyawan* k = new Karyawan[n];

    for (int i = 0; i < n; i++) {
        cout << "\nKaryawan ke-" << i + 1 << endl;

        cout << "Nama: ";
        getline(cin, (k + i)->nama);

        cout << "Jabatan: ";
        getline(cin, (k + i)->jabatan);

        cout << "Gaji: ";
        cin >> (k + i)->gaji;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\n=== DATA KARYAWAN ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". Nama: " << (k + i)->nama
             << " | Jabatan: " << (k + i)->jabatan
             << " | Gaji: " << (k + i)->gaji << endl;
    }

    delete[] k;
    return 0;
}