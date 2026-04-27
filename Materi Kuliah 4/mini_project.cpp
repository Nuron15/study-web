#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float nilai;
};

int main() {
    int n;
    float total = 0;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Mahasiswa* mhs = new Mahasiswa[n];

    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;

        cout << "Nama: ";
        getline(cin, (mhs + i)->nama);

        cout << "NIM: ";
        getline(cin, (mhs + i)->nim);

        cout << "Nilai: ";
        cin >> (mhs + i)->nilai;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        total += (mhs + i)->nilai;
    }

    cout << "\n=== DATA MAHASISWA ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". Nama: " << (mhs + i)->nama
             << " | NIM: " << (mhs + i)->nim
             << " | Nilai: " << (mhs + i)->nilai << endl;
    }

    cout << "\nRata-rata nilai kelas: " << total / n << endl;

    delete[] mhs;
    return 0;
}