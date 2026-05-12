#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_ROW = 4;
const int MAX_COL = 3;

int main() {
	int arr[MAX_ROW][MAX_COL];
	int i = 0;

	while(i < MAX_ROW) {
		for(int j = 0; j < MAX_COL; j++) {
			cout<<"Nhap arr["<<i<<"]["<<j<<"] = ";
			cin>>arr[i][j];
		}
		i++;
	}

	i = 0;
	while(i < MAX_ROW) {
		for(int j = 0; j < MAX_COL; j++) {
			cout<<setw(3)<<arr[i][j];
		}
		cout<<endl;
		i++;
	}
	return 0;
}