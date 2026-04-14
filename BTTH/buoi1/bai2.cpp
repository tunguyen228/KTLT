#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int r = 4, c = 3;
	int arr[r][c];
	int i = 0;

	while (i < r) {
		cout << "Nhap phan tu cho mang thu " << i + 1 << ": ";
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
		i++;
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}