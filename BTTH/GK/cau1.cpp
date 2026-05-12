#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

const int MAX = 5;

int main() {
    srand(time(0));
    int r, c, h;
    int arr[MAX][MAX];
    
    cout<<"Nhap so hang, so cot: ";
    cin>>r>>c;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            arr[i][j] = rand() % 19 + 1;
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout<<setw(4)<<arr[i][j];
        }
        cout<<endl;
    }

    do {
        cout<<"Nhap hang can xoa: ";
        cin>>h;
        if(h <= 0 || h  > MAX) {
            cout<<"So hang khong hop le!Nhap lai\n";
        }
    }while(h <= 0 || h  > MAX);

    for(int i = h - 1; i < r - 1; i++) {
        for(int j = 0; j < c; j++) {
            arr[i][j] = arr[i+1][j];  
        }    
    }
    r--;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout<<setw(4)<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}