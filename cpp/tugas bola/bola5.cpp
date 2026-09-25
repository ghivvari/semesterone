#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;

struct CetakanBola {
    int x, y;
    int dx, dy;
};

int main() {
    const int width = 40;
    const int height = 20;
    const int jumlahBola = 5;

    CetakanBola bola[jumlahBola];

    for (int i = 0; i < jumlahBola; i++) {
        
        bola[i].x = (width / 2) + (i * 2); 
        bola[i].y = (height / 2) - i;
        
        bola[i].dx = 1;
        bola[i].dy = 1;
    }

    while (true) {
        system("cls");

        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                
                bool adaBolaDisini = false;
                
                for (int k = 0; k < jumlahBola; k++) {
                    if (bola[k].x == j && bola[k].y == i) {
                        adaBolaDisini = true;
                        break; 
                    }
                }

                if (adaBolaDisini) {
                    cout << 'O'; 
                } 
                else if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                    cout << '#'; 
                } 
                else {
                    cout << ' '; 
                }
            }
            cout << '\n';
        }

        for (int k = 0; k < jumlahBola; k++) {
            bola[k].x += bola[k].dx;
            bola[k].y += bola[k].dy;

            if (bola[k].x <= 1) {
                bola[k].x = 1;
                bola[k].dx = (rand() % 2) + 1; 
            } else if (bola[k].x >= width - 2) {
                bola[k].x = width - 2;
                bola[k].dx = -((rand() % 2) + 1);
            }

            if (bola[k].y <= 1) {
                bola[k].y = 1;
                bola[k].dy = (rand() % 2) + 1;
            } else if (bola[k].y >= height - 2) {
                bola[k].y = height - 2;
                bola[k].dy = -((rand() % 2) + 1);
            }
        }

        this_thread::sleep_for(chrono::milliseconds(24));
    }

    return 0;
}