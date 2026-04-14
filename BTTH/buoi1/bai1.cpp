#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int r = 3, c = 4;
	int arr[r][c] = { {8, 4, -1, 5},
					{2, 2, 6, 9},
					{11, 2, 5, 4} };

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << setw(3) << arr[i][j] <<" ";
		}
		cout << endl;
	}
	return 0;
}