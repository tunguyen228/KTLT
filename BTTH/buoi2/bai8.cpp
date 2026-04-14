#include <iostream>
using namespace std;

void chuyenCoSo(int n);

int main() {
    int n;
    cout<<"Nhap: ";
    cin>>n;
    chuyenCoSo(n);
    return 0;
}

void chuyenCoSo(int n) {
    if(n==0)
        return;
    chuyenCoSo(n/2);
    cout<<n%2;
}