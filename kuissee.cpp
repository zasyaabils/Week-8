#include <iostream>
#include <iomanip>
using namespace std;

class Matriks {
public:
	void input_ukuran();
	void baca_matriks();
	void cetak_matriks();
	void matriks_jumlah(Matriks m1, Matriks m2);
	void matriks_kurang(Matriks m1, Matriks m2);
	void perkalian_matriks(Matriks m1, Matriks m2);
	void pembagian_matriks(Matriks m1, Matriks m2);
	
private:
	int A[10][10];
	int baris, kolom;
};

void Matriks::input_ukuran() {
	cout << "Banyak baris : ";
	cin >> baris;
	cout << "Banyak kolom : ";
	cin >> kolom;
	cout << endl;
}

void Matriks::baca_matriks() {
	for (int i = 0; i < baris; i++) {
		for (int j = 0; j < kolom; j++) {
			cout << "Data [" << i+1 << ", " << j+1 << "] : ";
			cin >> A[i][j];
		}
	}
}

void Matriks::cetak_matriks() {
	for (int i = 0; i < baris; i++) {
		for (int j = 0; j < kolom; j++) {
			cout << setw(5) << A[i][j] << " ";
		}
		cout << endl;
	}
}

void Matriks::matriks_jumlah(Matriks m1, Matriks m2) {
	baris = m1.baris;
	kolom = m2.baris;
	
	for (int i = 0; i < baris; i++) {
		for (int j = 0; j < kolom; j++) {
			A[i][j] = m1.A[i][j] + m2.A[i][j];
		}
	}
}

void Matriks::matriks_kurang(Matriks m1, Matriks m2) {
	baris = m1.baris;
	kolom = m2.baris;
	
	for (int i = 0; i < baris; i++) {
		for (int j = 0; j < kolom; j++) {
			A[i][j] = m1.A[i][j] - m2.A[i][j];
		}
	}
}

void Matriks::perkalian_matriks(Matriks m1, Matriks m2) {
	baris = m1.baris;
	kolom = m2.baris;
	int barkol = m1.kolom;
	
	for (int i = 0; i < baris; i++) {
		for (int j = 0; j < kolom; j++) {
			A[i][j] = 0;
			for (int k = 0; k < barkol; k++) {
				A[i][j] += m1.A[i][k] * m2.A[k][j];
			}	
		}
	}
}

void Matriks::pembagian_matriks(Matriks m1, Matriks m2) {
	baris = m1.baris;
	kolom = m2.baris;
	int barkol = m1.kolom;
	
	for (int i = 0; i < baris; i++) {
		for (int j = 0; j < kolom; j++) {
			A[i][j] = 0;
			for (int k = 0; k < barkol; k++) {
			A[i][j] = m1.A[i][j] / m2.A[i][j];
			}	
		}
	}
}

int main() {
	Matriks matriks1, matriks2, hasil;
	
	cout << "Masukkan data matriks I\n";
	matriks1.input_ukuran();
	matriks1.baca_matriks();
	cout << "\nMatriks I : \n";
	matriks1.cetak_matriks();
	
	cout << "\nMasukkan data matriks II\n";
	matriks2.input_ukuran();
	matriks2.baca_matriks();
	cout << "\nMatriks II : \n";
	matriks2.cetak_matriks();
	
	int pilih;
	
	do {
		cout << "\n=== MENU OPERASI === \n";
		cout << "1. Penjumlahan\n";
		cout << "2. Pengurangan\n";
		cout << "3. Perkalian\n";
		cout << "4. Pembagian\n";
		cout << "0. Keluar\n";
		cout << "Pilih menu : ";
		cin >> pilih;
		
		if (pilih == 1) {
			cout << "\nHasil Penjumlahan : \n";
			hasil.matriks_jumlah(matriks1, matriks2);
			hasil.cetak_matriks();
		} else if (pilih == 2) {
			cout << "\nHasil Pengurangan : \n";
			hasil.matriks_kurang(matriks1, matriks2);
			hasil.cetak_matriks();
		} else if (pilih == 3) {
			cout << "\nHasil Perkalian : \n";
			hasil.perkalian_matriks(matriks1, matriks2);
			hasil.cetak_matriks();
		} else if (pilih == 4) {
			cout << "\nHasil Pembagian : \n";
			hasil.pembagian_matriks(matriks1, matriks2);
			hasil.cetak_matriks();
		} else {
			cout << "Pilihan Tidak Ada.\n";
		}
		
	} while ( pilih != 0);
	
	
}
