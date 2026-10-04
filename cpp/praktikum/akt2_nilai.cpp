#include <iostream>


using namespace std;

int main(){

    int nilai;

    cout << "masukkan nilai : ";
    cin >> nilai;

    if (nilai >= 85)
    {
        cout << "A";
    } else if (nilai >= 70)
    {
        cout << "B";
    } else {
        cout << "C";
    }
    
    

    return 0;
}