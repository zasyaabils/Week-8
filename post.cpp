#include <iostream>
using namespace std;

void BubbleSort (int size, int data[]) {
			for (int i = 0; i < size-1; i++) {
				for (int j = 0; j < size-i-1; j++) {
					if (data[j] > data[j + 1]) {
						// Tukar Data
						int temp = data[j];
						data[j] = data[j + 1];
						data[j + 1] = temp;
					}
				}
			}
}

int main() {
	int A[3][3];
	int B[3][3];
	int AB[18];
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Data [" << i+1 << ", " << j+1 << "] : ";
			cin >> A[i][j];
		}
	}
	
	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Data [" << i+1 << ", " << j+1 << "] : ";
			cin >> B[i][j];
		}
	}

	cout << "\nMatriks 1 : \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "\nMatriks 2 : \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	
	int index = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			AB[index++] = A[i][j];
			
		}
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
				AB[index++] = B[i][j];
			}
	}
	
	cout << "\nGabungan : \n";
	for (int i = 0; i < 18; i++) {
		cout << AB[i] << " ";
	}
	
	BubbleSort(18, AB);
	
	cout << "\nUrutan Terkecil : \n";
	for (int i = 0; i < 18; i++) {
		cout << AB[i] << " ";
	}
	
}
