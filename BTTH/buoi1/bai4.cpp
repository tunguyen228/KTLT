#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int MAX_ROW = 5, MAX_COL = 6;
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
			cout << setw(2) << arr[i][j];
		}
		cout << endl;
	}

	int vitri, x, tong = 0;
	do {
		cout << "Tinh tong theo hang (1) hay tinh tong theo cot (0): ";
		cin >> vitri;
		if (vitri < 0 || vitri > 1) {
			cout << "Vi tri hang khong hop le! Vui long nhap lai\n";
		}
	} while (vitri < 0 || vitri > 1);

	if (vitri == 1) {
		do {
			cout << "Nhap chi so hang (0 -> " << r - 1 << "): ";
			cin >> x;
			if (x < 0 || x > r - 1) {
				cout << "Chi so hang khong hop le!Nhap lai\n";
			}
		} while (x < 0 || x > r - 1);
		for (int j = 0; j < c; j++) {
			tong += arr[x][j];
		}
		cout << "Tong hang " << x << " = " << tong << endl;
	} else {
		do {
			cout << "Nhap chi so cot (0 -> " << c - 1 << "): ";
			cin >> x;
			if (x < 0 || x > c - 1) {
				cout << "Chi so cot khong hop le!Nhap lai\n";
			}
		} while (x < 0 || x > c - 1);
		for (int i = 0; i < r; i++) {
			tong += arr[i][x];
		}
		cout << "Tong cot " << x << " = " << tong << endl;
	}

	int n;
	int count = 0;
	cout<<"Nhap gia tri can tim: ";
	cin>>n;
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			if(arr[i][j] == n) {
				count++;
			}
		}
	}
	cout<<"Gia tri can tim la "<<n<<" xuat hien trong mang "<<count<<" lan";

	return 0;
}