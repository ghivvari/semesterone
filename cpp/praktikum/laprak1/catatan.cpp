#include <iostream> 
using namespace std; 
int main() { 
int a, b; 
cout << "Masukkan bilangan pertama : "; 
cin >> a; 
    cout << "Masukkan bilangan kedua   : "; 
    cin >> b; 
 
    cout << "\n--- OPERATOR ARITMATIKA ---" << endl; 
    cout << a << " + " << b << " = " << a + b << endl; 
    cout << a << " - " << b << " = " << a - b << endl; 
    cout << a << " * " << b << " = " << a * b << endl; 
    cout << a << " / " << b << " = " << a / b << endl; 
    cout << a << " % " << b << " = " << a % b << endl; 
    cout << "Pembagian riil = " << (float)a / b << endl; 
 
    cout << "\n--- OPERATOR RELASIONAL ---" << endl; 
    cout << "a == b : " << (a == b) << endl; 
    cout << "a != b : " << (a != b) << endl; 
    cout << "a >  b : " << (a >  b) << endl; 
    cout << "a <= b : " << (a <= b) << endl; 
 
    cout << "\n--- OPERATOR LOGIKA ---" << endl; 
    cout << "(a > 0) && (b > 0) : " << ((a > 0) && (b > 0)) << endl; 
    cout << "(a > 0) || (b > 0) : " << ((a > 0) || (b > 0)) << endl; 
    cout << "!(a > 0)           : " << (!(a > 0)) << endl; 
 
    cout << "\n--- OPERATOR UNARY DAN PENUGASAN ---" << endl; 
    cout << "Nilai a saat ini : " << a << endl; 
    cout << "a++ menghasilkan : " << a++ << endl; 
    cout << "Nilai a sekarang : " << a << endl; 
    cout << "++a menghasilkan : " << ++a << endl; 
    a += 10; 
    cout << "Setelah a += 10  : " << a << endl; 
 
    return 0; 
} 