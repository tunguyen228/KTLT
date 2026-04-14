#include <iostream>
using namespace std;

void inSo(int n) {
    if (n == 1) {
        cout<<"1";
    } else {
        inSo(n-1);
        cout<<", "<<n;
    }  
}

int main() {
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    inSo(n);
    return 0;
}