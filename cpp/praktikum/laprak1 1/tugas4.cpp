#include <iostream>
using namespace std;

int main() {
    int bilangan;

    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    cout << boolalpha;
    cout << "Bilangan tersebut genap: " << (bilangan % 2 == 0) << '\n';
    cout << "Bilangan tersebut positif dan habis dibagi tiga: "
	    << (bilangan > 0 && bilangan % 3 == 0) << '\n';
    cout << "Bilangan tersebut habis dibagi lima atau tujuh: "
	    << (bilangan % 5 == 0 || bilangan % 7 == 0) << '\n';
    cout << "Bilangan tersebut bukan bilangan negatif: " << (bilangan >= 0) << '\n';

    cout << noboolalpha;
    cout << "Bilangan tersebut genap: " << (bilangan % 2 == 0) << '\n';
    cout << "Bilangan tersebut positif dan habis dibagi tiga: "
	    << (bilangan > 0 && bilangan % 3 == 0) << '\n';
    cout << "Bilangan tersebut habis dibagi lima atau tujuh: "
	    << (bilangan % 5 == 0 || bilangan % 7 == 0) << '\n';
    cout << "Bilangan tersebut bukan bilangan negatif: " << (bilangan >= 0) << '\n';

    return 0;
}
