#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void kuis1(int panjang = 5, int lebar = 8){
    int luas = panjang * lebar;
    cout << luas << endl;
}

void kuis2(){
    string nama;
    string umur;
    cout << "Input nama: ";
    cin >> nama;
    cout << "Input umur: ";
    cin >> umur;
    cout << "Halo " << nama << " Umur " << umur; 
}

void kuis3(){
    int selsius;
    cout << "masukkan selsius: ";
    cin >> selsius; 
    int fahrenheit =  selsius * 9/5 + 32;
    cout << fahrenheit << " F";
}

void kuis4(){
    for (int baris = 1; baris <= 5; baris++){
        for (int bintang = 1; bintang <= baris; bintang++){
            cout << "* ";
        }
        cout << endl;
    }
}

void kuis5(){
    for (int number = 1; number <= 10; number++){
        if (number % 2 != 0){
            cout << number << endl;
        }
    }
}

int main(){
    int choose;
    cout <<"Insert 1 - 20: ";
    cin >> choose;
    switch (choose){
        case 1:
            kuis1();
            break;
        case 2:
            kuis2();
            break;
        case 3:
            kuis3();
            break;
        case 4:
            kuis4();
            break;
        case 5:
            kuis5();
            break;
        
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}