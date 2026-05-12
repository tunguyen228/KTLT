#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_ROW = 10;
const int MAX_COL = 15;

int main() {
	int arr[MAX_ROW][MAX_COL];
	int r, c;

	do{
		cout<<"Nhap so hang va so cot: ";
		cin>>r>>c;
		if(r <=0 || c <= 0 || r > MAX_ROW || c > MAX_COL) {
			cout<<"So hang hoac so cot khong hop le! Nhap lai\n";
		}
	}while(r <=0 || c <= 0 || r > MAX_ROW || c > MAX_COL);

	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cout<<"Nhap arr["<<i<<"]["<<j<<"] = ";
			cin>>arr[i][j];
		}
	}

	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cout<<setw(3)<<arr[i][j];
		}
		cout<<endl;
	}

	int sum = 0;
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			sum += arr[i][j];
		}
	}
	cout<<"Tong cac gia tri luu tru trong mang = "<<sum<<endl;

	int max = arr[0][0], min = arr[0][0], minR, minC, maxR, maxC;
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			if(arr[i][j] > max) {
				max = arr[i][j];
				maxR = i;
				maxC = j;
			}
			if(arr[i][j] < min) {
				min = arr[i][j];
				minR = i;
				maxR = j;
			}
		}
	}
	cout<<"Gia tri lon nhat trong mang: "<<max<<" o vi tri hang "<<maxR<<" cot "<<maxC<<endl;
	cout<<"Gia tri nho nhat trong mang: "<<min<<" o vi tri hang "<<minR<<" cot "<<minC<<endl;

	return 0;
}