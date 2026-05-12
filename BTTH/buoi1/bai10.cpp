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

	int val = 1, hD = 0, hC = n - 1, cD = 0, cC = n - 1;
	while(val <= n*n) {
		for(int j = hD; j <= cC; j++) {
			arr[hD][j] = val++;
		}
		hD++;
		for(int i = hD; i <= hC; i++) {
			arr[i][cC] = val++;
		}
		cC--;
		for(int j = cC; j >= cD; j--) {
			arr[hC][j] = val++;
		}
		hC--;
		for(int i = hC; i >= hD; i--) {
			arr[i][cD] = val++;
		}
		cD++;
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0 ; j < n; j++) {
			cout<<setw(4)<<arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}