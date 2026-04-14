#include <iostream>
using namespace std;

int tongPtChan(int n);
int tongPtLe(int n);

int main() {
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"Tong phan tu chan = "<<tongPtChan(n)<<endl;
    cout<<"Tong phan tu le = "<<tongPtLe(n)<<endl;
    return 0;
}

int tongPtChan(int n) {
    int tong = 0;
    if(n==0)
        return 0;
    int chuSoCuoi = n % 10;
    if(chuSoCuoi % 2 == 0) {
        tong += chuSoCuoi;
    }
    return tong + tongPtChan(n/10);
}

int tongPtLe(int n) {
    int tong = 0;
    if(n==0)
        return 0;
    int chuSoCuoi = n % 10;
    if(chuSoCuoi % 2 != 0) {
        tong += chuSoCuoi;
    }
    return tong + tongPtLe(n/10);
}