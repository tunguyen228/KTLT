#include <iostream>
#include <iomanip>
using namespace std;

int GTLN(int arr[], int n);

int main() {
    srand(time(0));
    const int MAX = 50;
    int arr[MAX];
    int n;

    cout<<"Nhap so phan tu cho mang: ";
    cin>>n; 

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 50 + 1;
    }

    cout<<"Mang ban dau:\n";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Gia tri lon nhat trong mang la: "<<GTLN(arr, n);

    
    return 0;
}

int GTLN(int arr[], int n) {
    if(n == 1) {
        return arr[0];
    }
    int max = GTLN(arr, n - 1);
    if(arr[n-1] > max) {
        return arr[n-1];
    } else {
        return max;
    }
}