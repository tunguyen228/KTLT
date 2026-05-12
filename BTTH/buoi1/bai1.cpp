#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_ROW = 3;
const int MAX_COL = 4;

int main() {
	int arr[MAX_ROW][MAX_COL] = {{8, 4, -1, 5},
								{2, 2, 6, 9},
								{11, 2, 5, 4}};
	for(int i = 0; i < MAX_ROW; i++) {
		for(int j = 0; j < MAX_COL; j++) {
			cout<<setw(2)<<arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}