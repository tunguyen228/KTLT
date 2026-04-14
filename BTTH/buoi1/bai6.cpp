#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int MAX_ROW = 5, MAX_COL = 6;
	int a[MAX_ROW][MAX_COL];
	int b[MAX_ROW][MAX_COL];
	int r, c;

	do {
		cout << "Nhap so han va so cot: ";
		cin >> r >> c;
		if (r <= 0 || c <= 0 || r > MAX_ROW || c > MAX_COL) {
			cout << "Khong hop le!Nhap lai\n";
		}
	} while (r <= 0 || c <= 0 || r > MAX_ROW || c > MAX_COL);

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << "Nhap b[" << i << "][" << j << "] = ";
			cin >> b[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << setw(6) << a[i][j];
		}
		cout << endl;
	}
	cout << "====================\n";
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << setw(6) << b[i][j];
		}
		cout << endl;
	}

	int tong[MAX_ROW][MAX_COL], tich[MAX_ROW][MAX_COL];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			tong[i][j] = a[i][j] + b[i][j];
			tich[i][j] = a[i][j] * b[i][j];
		}
	}

	cout << "Tong 2 ma tran:\n";
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << setw(6) << tong[i][j];
		}
		cout << endl;
	}

	cout << "Tich 2 ma tran:\n";
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << setw(6) << tich[i][j];
		}
		cout << endl;
	}

	return 0;
}