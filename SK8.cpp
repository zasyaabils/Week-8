#include <iostream>
using namespace std;

class toko {
private:
	string produk[99];
	int penjualan[99];
	int data[99][99];
	int jmlHari;
	int jmlProduk;
	
public:
	void Menu() {
		cout << "====================================\n";
		cout << "	Toko Pak Andi\n";
		cout << "====================================\n";
		cout << "Masukkan jumlah maksimum hari : ";
		cin >> jmlHari;
		cout << "Masukkan jumlah maksimum produk : ";
		cin >> jmlProduk;
		
		cout << endl;
		for (int i = 0; i < jmlProduk; i++) {
			cout << "Masukkan nama produk ke-" << i+1 << " : ";
			cin >> produk[i];
		}
		
		cout << endl;
		for (int i = 0; i < jmlHari; i++) {
			cout << "Masukkan penjualan hari " << i + 1 << endl;
			for (int j = 0; j < jmlProduk; j++) {
				cout << "Jumlah penjualan " << produk[j] << " : ";
				cin >> data[i][j];
			}
			cout << endl << endl;
		}
		
		cout << "====================================\n";
		cout << " Data Penjualan Toko Pak Andi\n";
		cout << "====================================\n";
		cout << "| Hari      | ";
		for (int i = 0; i < jmlProduk; i++) {
			cout << produk[i] << " | ";
		}
		cout << "\n====================================\n";
		
		int jumlah = 0;
		for (int i = 0; i < jmlHari; i++) {
			for (int j = 0; j < jmlProduk; j++) {
				cout << "| Hari ke : " << i + 1 << " | " << data[i][j] << " | " ;
				jumlah += data[i][j];
			}
			cout << endl;
		}
		cout << "\n====================================\n";
		cout << "Total Penjualan : " << jumlah;
		cout << "\n====================================\n";
		
	}
};

int main() {
	toko t;
	
	t.Menu();

	return 0;
}
