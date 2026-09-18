#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void square(int panjang, int lebar, int luas){
    luas = lebar * panjang;
    cout << luas << endl;
}

void triangle(int tinggi, int lebar, int luas){
    luas = lebar * tinggi / 2;
    cout << luas << endl;
}

void circle(int jari, int luas){
    luas = (pow(jari, 2) * 22)/7;
    cout << luas << endl;
}



int main(){
    string pilihan;
    int panjang; 
    int lebar;
    int tinggi;
    int jari; 
    int luas;
    cout << "Bangun datar apa (persegi/segitiga/lingkaran): ";
    cin >> pilihan;
    if (pilihan == "persegi")
    {
        cout << "masukkan panjang: ";
        cin >> panjang;
        cout << "masukkan lebar: ";
        cin >> lebar;
        square(panjang, lebar, 0);
    }
    else if (pilihan == "segitiga")
    {
        cout << "masukkan tinggi: ";
        cin >> tinggi;
        cout << "masukkan lebar: ";
        cin >> lebar;
        triangle(tinggi, lebar, 0);
    }
    else if (pilihan == "lingkaran")
    {
        cout << "masukkan jari-jari: ";
        cin >> jari;
        circle(jari, 0);
    }
    else
    {
        cout << "lu milih apa anjay";
    }
    
    
    return 0;
}