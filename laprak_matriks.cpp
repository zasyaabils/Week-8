#include <iostream>
#include <iomanip>
using namespace std;

class Matriks {
public:
	void input_ukuran();
	void baca_matriks();
	void cetak_matriks();
	void matriks_jumlah(Matriks m1, Matriks m2);
	void perkalian_matriks(Matriks m1, Matriks m2);
	
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

int main() {
	Matriks matriks1, matriks2, hasil;
	
	cout << "Masukkan data matriks I\n";
	matriks1.input_ukuran();
	matriks1.baca_matriks();
	cout << "Matriks I : \n";
	matriks1.cetak_matriks();
	
	cout << "\nMasukkan data matriks II\n";
	matriks2.input_ukuran();
	matriks2.baca_matriks();
	cout << "Matriks II : \n";
	matriks2.cetak_matriks();
	
	cout << "\nHasil Penjumlahan : \n";
	hasil.matriks_jumlah(matriks1, matriks2);
	hasil.cetak_matriks();
	
	cout << "\nHasil Perkalian : \n";
	hasil.perkalian_matriks(matriks1, matriks2);
	hasil.cetak_matriks();
	
	return 0;
}
