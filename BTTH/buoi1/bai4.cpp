#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_ROW = 5;
const int MAX_COL = 6;

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

	int sum = 0, viTri, choice;
	cout<<"\nNhap hang (1)/cot (0) can tinh tong: ";
	cin>>choice;
	switch(choice) {
		case 1:
			do {
				cout<<"Nhap hang can tinh tong: ";
				cin>>viTri;
				if(viTri < 0 || viTri > r) {
					cout<<"Vi tri hang khong hop le!\n";
				}
			}while(viTri < 0 || viTri > r);
			
			for(int j = 0; j < c; j++) {
				sum += arr[viTri][j];
			}
			cout<<"Tong hang "<<viTri<<" = "<<sum<<endl;
			break;
		case 0:
			do {
				cout<<"Nhap cot can tinh tong: ";
				cin>>viTri;
				if(viTri < 0 || viTri > r) {
					cout<<"Vi tri cot khong hop le!\n";
				}
			}while(viTri < 0 || viTri > c);
			
			for(int i = 0; i < r; i++) {
				sum += arr[i][viTri];
			}
			cout<<"Tong cot "<<viTri<<" = "<<sum<<endl;
			break;
		default:
			cout<<"Lua chon khong hop le\n";
			break;
	}

	int x, count = 0;
	cout<<"Nhap gia tri x can tim: ";
	cin>>x;
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			if(arr[i][j] == x) {
                cout << "Hang " << i << ", Cot " << j << endl;
				count++;
			}
		}
	}
	cout<<"Gia tri "<<x<<" xuat hien "<<count<<" lan";

	return 0;
}