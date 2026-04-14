#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int MAX_ROW = 5, MAX_COL = 6;
	int arr[MAX_ROW][MAX_COL];
	int n;

	cout<<"Nhap cap cho ma tran (tu 2 -> 5): ";
	cin>>n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(2) << arr[i][j];
		}
		cout << endl;
	}

	int sumMain = 0, sumSub = 0;
	for (int i = 0; i < n; i++) {
		sumMain += arr[i][i];			//đường chéo chính: i = j
		sumSub += arr[i][n - 1 - i];	//đường chéo phụ i + j = n - 1 ==> i = n - 1 - j
	}
	cout<<"Tong duong cheo chinh = "<<sumMain<<endl;
	cout<<"Tong duong cheo phu = "<<sumSub<<endl;

	return 0;
}