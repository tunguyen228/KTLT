#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int MAX_ROW = 10, MAX_COL = 15;
	int arr[MAX_ROW][MAX_COL];
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
			cin >> arr[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout <<setw(2) << arr[i][j];
		}
		cout << endl;
	}

	int tong = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			tong += arr[i][j];
		}
	}
	cout << "Tong cac gia tri luu tru trong mang = " << tong << endl;

	int min = arr[0][0], max = arr[0][0];
	int rmin = 0, rmax = 0, cmin = 0, cmax = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				rmax = i;
				cmax = j;
			}
			if (arr[i][j] < min) {
				min = arr[i][j];
				rmin = i;
				cmin = j;
			}
		}
	}

	cout << "Gia tri lon nhat trong mang: " << max << " o hang " << rmax + 1 << " va cot " << cmax + 1 << endl
		<< "Gia tri nho nhat trong mang: " << min << " o hang " << rmin + 1 << " va cot " << cmin + 1 << endl;

	return 0;
}