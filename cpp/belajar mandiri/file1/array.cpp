#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int scores[n] = {90, 82, 77, 95, 68};

    // Read / write by index (starts at 0)
    scores[0];      // 90
    scores[4] = 70; // last slot

    // Loop it
    for (int i = 0; i < n; i++) {
        cout << scores[i] << '\n';
    }

}