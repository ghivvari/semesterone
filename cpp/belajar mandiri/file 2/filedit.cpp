#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void tulisHasil(ostream& output, const vector<int>& nilai) {
	long long total = 0;
	output << "Daftar nilai: ";
	for (int data : nilai) {
		output << data << " ";
		total += data;
	}

	output << "\nJumlah data: " << nilai.size() << '\n';
	output << "Rata-rata: " << static_cast<double>(total) / nilai.size() << '\n';
}

int main() {
	vector<int> nilai;
	ifstream fileInput("hasil_vector.txt");
	string baris;

	if (!fileInput) {
		cerr << "File hasil_vector.txt tidak ditemukan. Jalankan program vector.cpp terlebih dahulu.\n";
		return 1;
	}

	if (!getline(fileInput, baris)) {
		cerr << "File hasil_vector.txt kosong.\n";
		return 1;
	}

	size_t pemisah = baris.find(':');
	if (pemisah == string::npos) {
		cerr << "Format file hasil_vector.txt tidak valid.\n";
		return 1;
	}

	istringstream data(baris.substr(pemisah + 1));
	int input;
	while (data >> input) {
		nilai.push_back(input);
	}
	fileInput.close();

	if (nilai.empty()) {
		cerr << "Tidak ada nilai yang dapat dibaca dari file.\n";
		return 1;
	}

	cout << "Nilai saat ini:\n";
	for (size_t i = 0; i < nilai.size(); i++) {
		cout << i + 1 << ". " << nilai[i] << '\n';
	}

	int pilihan;
	cout << "\n1. Tambah nilai\n2. Kurangi nilai yang sudah ada\nPilih: ";
	cin >> pilihan;

	if (pilihan == 1) {
		int banyakNilai;
		cout << "Berapa nilai yang ingin ditambahkan? ";
		cin >> banyakNilai;
		if (banyakNilai <= 0) {
			cerr << "Jumlah nilai harus lebih dari 0.\n";
			return 1;
		}

		for (int i = 0; i < banyakNilai; i++) {
			cout << "Masukkan nilai baru ke-" << i + 1 << ": ";
			cin >> input;
			nilai.push_back(input);
		}
	} else if (pilihan == 2) {
		int banyakPengurangan;
		cout << "Berapa nilai yang ingin dikurangi? ";
		cin >> banyakPengurangan;
		if (banyakPengurangan <= 0) {
			cerr << "Jumlah pengurangan harus lebih dari 0.\n";
			return 1;
		}

		for (int i = 0; i < banyakPengurangan; i++) {
			size_t nomor;
			int pengurangan;
			cout << "Nomor nilai yang ingin dikurangi ke-" << i + 1 << ": ";
			cin >> nomor;
			if (nomor < 1 || nomor > nilai.size()) {
				cerr << "Nomor nilai tidak valid.\n";
				return 1;
			}

			cout << "Jumlah pengurangan: ";
			cin >> pengurangan;
			nilai[nomor - 1] -= pengurangan;
		}
	} else {
		cerr << "Pilihan tidak valid.\n";
		return 1;
	}

	ofstream fileOutput("hasil_vector.txt");
	if (!fileOutput) {
		cerr << "Gagal menyimpan hasil_vector.txt.\n";
		return 1;
	}

	tulisHasil(fileOutput, nilai);
	fileOutput.close();

	cout << "\nHasil terbaru:\n";
	tulisHasil(cout, nilai);
	cout << "\nHasil disimpan di hasil_vector.txt.\n";

	return 0;
}
