#include <iostream>
using namespace std;

int chuyenCoSo(int n);

int main() {
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<chuyenCoSo(n);
    return 0;
}

int chuyenCoSo(int n) {
    if(n < 2)
        return n;
    return (n%2) + 2 * chuyenCoSo(n/10);
}