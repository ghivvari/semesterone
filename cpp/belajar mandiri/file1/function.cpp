#include <iostream>
using namespace std;

int report1(int UTS, int UAS, int tugas) {
    return (UTS + UAS + tugas) / 3;
}

void report2(int UTS, int UAS, int tugas) {
    cout << (UTS + UAS + tugas) / 3 << endl;
}

int main() 
{
    cout << report1(100, 95, 89) << endl;
    report2(98, 95, 93);
    return 0;
}