#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 5;

int main() {
	int arr[MAX][MAX], brr[MAX][MAX];
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
			cout<<"Nhap brr["<<i<<"]["<<j<<"] = ";
			cin>>brr[i][j];
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout<<setw(3)<<arr[i][j];
		}
		cout<<endl;
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout<<setw(3)<<brr[i][j];
		}
		cout<<endl;
	}

	int sum[MAX][MAX] = {0}, tich[MAX][MAX] = {1};
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			sum[i][j] = arr[i][j] + brr[i][j];
			tich[i][j] = arr[i][j] * brr[i][j];
		}
	}
	cout<<"Tong 2 ma tran:\n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout<<setw(5)<<sum[i][j];
		}
		cout<<endl;
	}
	cout<<"Tich 2 ma tran:\n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout<<setw(5)<<tich[i][j];
		}
		cout<<endl;
	}

	return 0;
}