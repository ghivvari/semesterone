#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Masukkan dua bilangan bulat: ";
    cin >> a >> b;

    int nilaiAwalA = a;
    int nilaiAwalB = b;

    cout << "\n=== Pertukaran menggunakan variabel bantu ===\n";
    cout << "Sebelum: a = " << a << ", b = " << b << '\n';

    int bantu = a;
    a = b;
    b = bantu;

    cout << "Sesudah: a = " << a << ", b = " << b << '\n';

    a = nilaiAwalA;
    b = nilaiAwalB;

    cout << "\n=== Pertukaran tanpa variabel bantu (operator aritmatika) ===\n";
    cout << "Sebelum: a = " << a << ", b = " << b << '\n';

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Sesudah: a = " << a << ", b = " << b << '\n';

    cout << "\nKelebihan dan kekurangan:\n";
    cout << "1. Variabel bantu: langkahnya jelas dan aman dari overflow akibat penjumlahan, "
	    "tetapi menggunakan satu variabel tambahan.\n";
    cout << "2. Operator aritmatika: tidak memerlukan variabel tambahan, tetapi penjumlahan "
	    "dapat menyebabkan overflow jika nilai terlalu besar sehingga hasilnya salah "
	    "atau perilakunya tidak terdefinisi.\n";

    return 0;
}
