#include <iostream>
using namespace std;

int giaiThua(int n);

int main() {
    int n;
    do {
        cout<<"Nhap n: ";
        cin>>n;
        if(n <= 0)
            cout<<"Nhap lai n > 0\n";
    }while(n <= 0);
    cout<<"Tong giai thua tu 1 den "<<n<<" la: "<<giaiThua(n)<<endl;
    return 0;
}

int giaiThua(int n) {
    if(n == 1) 
        return 1;
    return n * giaiThua(n - 1);
}