#include <iostream>
#include <cstdlib> // Untuk system("clear") dan fungsi rand() (acak)
#include <thread>
#include <chrono>

using namespace std;

int main() {
    const int width = 40;
    const int height = 20;

    int x = width / 2;
    int y = height / 2;

    int dx = -1;
    int dy = 1;
    
    // Variabel untuk mengontrol kecepatan bola
    int delayWaktu = 80; 

    while (true) {
        // Hapus layar (Ganti "cls" menjadi "clear" jika di Mac/Linux)
        system("cls");

        // 1. Menggambar frame dan bola
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                if (i == y && j == x) {
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

        // 2. Update posisi bola
        x += dx;
        y += dy;

        // 3. Logika Pantulan Dinamis
        // Fungsi (rand() % 2) + 1 akan menghasilkan angka acak 1 atau 2
        
        // Pantul Kiri & Kanan
        if (x <= 1) {
            x = 1; 
            dx = (rand() % 2) + 1;    // Pantul ke kanan dengan sudut acak
        } else if (x >= width - 2) {
            x = width - 2; 
            dx = -((rand() % 2) + 1); // Pantul ke kiri dengan sudut acak
        }

        // Pantul Atas & Bawah
        if (y <= 1) {
            y = 1; 
            dy = (rand() % 2) + 1;    // Pantul ke bawah dengan sudut acak
        } else if (y >= height - 2) {
            y = height - 2; 
            dy = -((rand() % 2) + 1); // Pantul ke atas dengan sudut acak
        }

        // 4. Logika Kecepatan (Cepat jika tajam, Lambat jika tumpul)
        // Kita ubah nilainya jadi positif semua untuk dicek
        int absolut_dx = (dx > 0) ? dx : -dx;
        int absolut_dy = (dy > 0) ? dy : -dy;

        // Jika langkah X dan Y berbeda, berarti sudutnya tajam (curam)
        if (absolut_dx != absolut_dy) {
            delayWaktu = 30; // Jeda waktu kecil = Bola Cepat!
        } 
        // Jika langkah X dan Y sama, berarti sudutnya tumpul (45 derajat)
        else {
            delayWaktu = 80; // Jeda waktu besar = Bola Lambat!
        }

        // 5. Jeda waktu menggunakan variabel dinamis
        this_thread::sleep_for(chrono::milliseconds(delayWaktu));
    }

    return 0;
}