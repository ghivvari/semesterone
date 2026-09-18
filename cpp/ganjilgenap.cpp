#include <iostream>
using namespace std;

int main(){
    int angka;

    cout << "Masukin angka: ";
    cin >> angka;
    if (angka % 2 == 0)
    {
        cout << "Genap";
    }
    else
    {
        cout << "Ganjil";
    }
    
    
    return 0;
}