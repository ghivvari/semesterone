#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Masukkan tiga bilangan bulat (dipisahkan spasi): ";
    cin >> a >> b >> c;

    int terbesar = a;
    if (b > terbesar) {
        terbesar = b;
    }
    if (c > terbesar) {
        terbesar = c;
    }

    cout << "Bilangan terbesar adalah: " << terbesar << endl;
    return 0;
}