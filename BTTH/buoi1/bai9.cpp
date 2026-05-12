#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 10;

int main() {
	int arr[MAX][MAX];
	int n;
	
	do{
		cout<<"Nhap cap cho ma tran vuong (2 <= n <= 10): ";
		cin>>n;
		if(n < 2 || n > 10) {
			cout<<"Nhap lai n!\n";
		}
	}while(n < 2 || n > 10);

	int val = 1, j = 0;
	while(val <= n*n) {
		if(j % 2 == 0) {
			for(int i = 0; i < n; i++) {
				arr[i][j] = val++;
			}
			j++;
		} else {
			for(int i = n - 1; i >= 0; i--) {
				arr[i][j] = val++;
			}
			j++;
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0 ; j < n; j++) {
			cout<<setw(4)<<arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}