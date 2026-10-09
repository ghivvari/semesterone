#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    // Pemetaan rentang ke dalam kode numerik untuk struktur switch
    int kode_kategori = 0;
    if (angka >= 1 && angka <= 10) {
        kode_kategori = 1;
    } else if (angka >= 11 && angka <= 50) {
        kode_kategori = 2;
    } else if (angka > 50) {
        kode_kategori = 3;
    }

    switch (kode_kategori) {
        case 1:
            cout << "Angka dalam kategori kecil" << endl;
            break;
        case 2:
            cout << "Angka dalam kategori sedang" << endl;
            break;
        case 3:
            cout << "Angka kategori besar" << endl;
            break;
        default:
            cout << "Angka di luar kategori" << endl;
            break;
    }

    return 0;
}