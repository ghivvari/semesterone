#include <iostream>

using namespace std;

int main(){
    string nama;
    int tugas;
    int UAS;
    int UTS;
    int kuis;

    cout<<"masukkan nama \t: ";
    getline(cin, nama);
    cout<<"Range nilai hanya dari 1-100"<<endl;
    cout<<"masukkan nilai tugas \t: ";
    cin >> tugas;
    cout<<"masukkan nilai kuis \t: ";
    cin >> kuis;
    cout<<"masukkan nilai UTS \t: ";
    cin >> UTS;
    cout<<"masukkan nilai UAS \t: ";
    cin >> UAS;

    const int rapot = (tugas * 20/100) + (kuis * 10/100) + (UTS * 30/100) + (UAS * 40/100);

    cout << "nilai rapot " << nama << "" << rapot;

    return 0;
}