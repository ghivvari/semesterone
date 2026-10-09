#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Masukkan panjang tiga sisi segitiga (a b c): ";
    cin >> a >> b >> c;

    // Memeriksa validitas pembentukan segitiga
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            cout << "Segitiga sama sisi" << endl;
        } else if (a == b || a == c || b == c) {
            cout << "Segitiga sama kaki" << endl;
        } else {
            cout << "Segitiga sembarang" << endl;
        }
    } else {
        cout << "Tidak dapat membentuk segitiga" << endl;
    }

    return 0;
}