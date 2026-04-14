#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int MAX = 10;
	int arr[MAX][MAX];
	int n;

	cout<<"Nhap cap cho ma tran (tu 2 -> 10): ";
	cin>>n;

    int val = 1;
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	while (val <= n * n) {
		for(int j = c1; j <= c2; j++) {		//hàng đầu tiên đi từ trái -> phải
			arr[h1][j] = val++;				//chỉ số cột thay đổi
		}
		h1++; 								//tăng biên
		for(int i = h1; i <= h2; i++) {		//cạnh ngoài cùng đi từ trên -> dưới
			arr[i][c2] = val++;				//chỉ số hàng thay đổi
		}
		c2--;								//giảm biên
		if(h1 <= h2 && c1 <= c2) {
			for(int j = c2; j >= c1; j--) {	//hàng dưới cùng đi từ phải -> trái
				arr[h2][j] = val++;			//chỉ số cột thay đổi
			}
			h2--;							//giảm biên
			for(int i = h2; i >= h1; i--) { //cạnh bên trái đi từ dưới lên trên
				arr[i][c1] = val++;			//chỉ số hàng thay đổi
			}
			c1++;							//tăng biên
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout<<setw(4)<<arr[i][j];
		}
		cout<<endl;
	}

	return 0;
}