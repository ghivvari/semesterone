#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	vector<int> nilai;
	int jumlah;
	int input;
	int total = 0;

	cout << "Masukkan jumlah nilai: ";
	cin >> jumlah;

	if (jumlah <= 0) {
		cout << "Jumlah nilai harus lebih dari 0.\n";
		return 0;
	}

	for (int i = 0; i < jumlah; i++) {
		cout << "Masukkan nilai ke-" << i + 1 << ": ";
		cin >> input;
		nilai.push_back(input);
		total += input;
	}

	ofstream fileOutput("hasil_vector.txt");
	if (!fileOutput) {
		cerr << "Gagal membuat file hasil_vector.txt.\n";
		return 1;
	}

	cout << "\nDaftar nilai: ";
	fileOutput << "Daftar nilai: ";
	for (int data : nilai) {
		cout << data << " ";
		fileOutput << data << " ";
	}

	cout << "\nJumlah data: " << nilai.size() << '\n';
	fileOutput << "\nJumlah data: " << nilai.size() << '\n';
	cout << "Rata-rata: " << static_cast<double>(total) / nilai.size() << '\n';
	fileOutput << "Rata-rata: " << static_cast<double>(total) / nilai.size() << '\n';

	cout << "Hasil juga disimpan di hasil_vector.txt.\n";

	return 0;
}
