#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <cmath>   
#include <ctime>    

using namespace std;

struct CetakanBola {
    int x, y;
    int dx, dy;
};

int main() {
    srand(time(0)); 

    const int width = 100;
    const int height = 100;
    const int jumlahBola = 50;

    CetakanBola bola[jumlahBola];

    for (int i = 0; i < jumlahBola; i++) {
        bola[i].x = (rand() % (width - 2)) + 1; 
        bola[i].y = (rand() % (height - 2)) + 1;
        
        bola[i].dx = (rand() % 2 == 0) ? 1 : -1;
        bola[i].dy = (rand() % 2 == 0) ? 1 : -1;
    }

    while (true) {
        system("cls"); 

        string layar = "";

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
                    layar += 'O';
                } 
                else if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                    layar += '#';
                } 
                else {
                    layar += ' ';
                }
            }
            layar += '\n';
        }

        cout << layar;

        for (int i = 0; i < jumlahBola; i++) {
            bola[i].x += bola[i].dx;
            bola[i].y += bola[i].dy;

            if (bola[i].x <= 1) {
                bola[i].x = 1;
                bola[i].dx = (rand() % 2) + 1; 
            } else if (bola[i].x >= width - 2) {
                bola[i].x = width - 2;
                bola[i].dx = -((rand() % 2) + 1);
            }

            if (bola[i].y <= 1) {
                bola[i].y = 1;
                bola[i].dy = (rand() % 2) + 1;
            } else if (bola[i].y >= height - 2) {
                bola[i].y = height - 2;
                bola[i].dy = -((rand() % 2) + 1);
            }
        }


        for (int i = 0; i < jumlahBola; i++) {
            for (int j = i + 1; j < jumlahBola; j++) { 
                
                if (abs(bola[i].x - bola[j].x) <= 1 && abs(bola[i].y - bola[j].y) <= 1) {
                    
                    int temp_dx = bola[i].dx;
                    bola[i].dx = bola[j].dx;
                    bola[j].dx = temp_dx;

                    int temp_dy = bola[i].dy;
                    bola[i].dy = bola[j].dy;
                    bola[j].dy = temp_dy;

                    bola[i].x += bola[i].dx;
                    bola[i].y += bola[i].dy;
                }
            }
        }

        this_thread::sleep_for(chrono::milliseconds(300));
    }

    return 0;
}