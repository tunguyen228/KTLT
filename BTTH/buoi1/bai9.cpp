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
	for (int j = 0; j < n; j++) {
        if(j % 2 == 0) {
            for(int i = 0; i < n; i++) {
                arr[i][j] = val++;
            }
        } else if (j % 2 != 0) {
            for(int i = n-1; i >= 0; i--) {
                arr[i][j] = val++;
            }
        }
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}