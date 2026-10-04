#include <iostream>

using namespace std;

int main(){
    int pilih;

    cout <<"Pilih matkul 1. Alma 2. Pemdas 3. IMKA 4. Matdis 5. Matdas (input angka 1-5): ";
    cin >> pilih;
    if (cin.fail()) {
        cout << "Error: Input yang Anda masukkan bukan angka!\n";
        cin.clear();
    }
    switch (pilih)
    {
    case 1:
        cout << "Alma";
        break;
    case 2:
        cout << "Pemdas";
        break;
    case 3:
        cout << "IMKA";
        break;
    case 4:
        cout << "Matdis";
        break;
    case 5:
        cout << "Matdas";
        break;
    default:
        break;
    }
    return 0;
}