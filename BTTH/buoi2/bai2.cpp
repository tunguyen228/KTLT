#include <iostream>
using namespace std;

int giaiThua(int n);

int main() {
    int n;
    cout<<"Nhap so nguyen n khong am: ";
    cin>>n;
    cout<<"Tong giai thua tu 1 den n = "<<giaiThua(n)<<endl;
    return 0;
}

int giaiThua(int n) {
    if(n == 1) 
        return 1;
    return n * giaiThua(n - 1);
}