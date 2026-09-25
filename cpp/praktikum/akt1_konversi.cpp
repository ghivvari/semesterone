#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <chrono>
#include <thread>

using namespace std;

int main(){
    string nama;
    int celcius, fahrenheit, reamur, kelvin;
    
    cout << "masukkan nama anda\t: ";
    getline(cin, nama);
    cout << "masukkan suhu (Celcius)\t: ";
    cin >> celcius;

    fahrenheit = (celcius * 9.0 / 5.0) + 32;
    reamur = celcius * 4.0 / 5.0;
    kelvin = celcius + 273.15;

    cout << fixed << setprecision(2);
    cout << "\nHalo " << nama << ", berikut hasil konversinya" << endl;

    cout << "Fahrenheit\t : " << fahrenheit << endl;
    cout << "Reamur\t\t : " << reamur << endl;
    cout << "Kelvin\t\t : " << kelvin <<endl;

    cout << "\nUkuran memori tipe data:" << endl;
    cout << "int    : " << sizeof(int)    << " byte" << endl;
    cout << "float  : " << sizeof(float)  << " byte" << endl;
    cout << "double : " << sizeof(double) << " byte" << endl;
    cout << "char   : " << sizeof(char)   << " byte" << endl;
    cout << "bool   : " << sizeof(bool)   << " byte" << endl;

    
    

    return 0;

}