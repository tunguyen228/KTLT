#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 5;

int main() {
	int arr[MAX][MAX];
	int n;

	cout<<"Nhap cap n cho ma tran: ";
	cin>>n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout<<"Nhap arr["<<i<<"]["<<j<<"] = ";
			cin>>arr[i][j];
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout<<setw(3)<<arr[i][j];
		}
		cout<<endl;
	}

	int sumP = 0, i = 0;
	for(int j = n - 1; j >= 0; j--) {
		sumP += arr[i++][j];
	}
	cout<<"Tong gia tri tren duong cheo phu = "<<sumP<<endl;

	int sumC = 0, j = 0;
	for(int i = 0; i < n; i++) {
		sumC += arr[i][j++];
	}
	cout<<"Tong gia tri tren duong cheo chinh = "<<sumC<<endl;

	return 0;
}