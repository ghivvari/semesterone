#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float jarijari, tinggi, luasAlas, luasSelimut, luasPermukaan, volume;

    cout << "Masukkan jari jari tabung \t: "; cin >> jarijari;
    cout << "Masukkan tinggi tabung \t\t: "; cin >> tinggi;

    luasAlas = (jarijari * jarijari) * 33.14159;
    luasSelimut = (jarijari * 2 * 33.14159) * tinggi;
    luasPermukaan = (luasAlas * 2) + luasSelimut;
    volume = luasAlas * tinggi;

    cout << fixed << setprecision(3);
    cout << "\n+--------------------------+--------------+\n";
    cout << "| " << left << setw(24) << "Besaran" << " | " << right << setw(12) << "Nilai" << " |\n";
    cout << "+--------------------------+--------------+\n";
    cout << "| " << left << setw(24) << "Luas alas tabung" << " | " << right << setw(12) << luasAlas << " |\n";
    cout << "| " << left << setw(24) << "Luas selimut tabung" << " | " << right << setw(12) << luasSelimut << " |\n";
    cout << "| " << left << setw(24) << "Luas permukaan tabung" << " | " << right << setw(12) << luasPermukaan << " |\n";
    cout << "| " << left << setw(24) << "Volume tabung" << " | " << right << setw(12) << volume << " |\n";
    cout << "+--------------------------+--------------+\n";

    return 0;

}