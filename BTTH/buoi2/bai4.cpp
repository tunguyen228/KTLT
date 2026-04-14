#include <iostream>
using namespace std;

int luyThua(int x, int n);

int main() {
    int x, n;
    cout<<"Nhap x: ";
    cin>>x;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<x<<" luy thua "<<n<<" = "<<luyThua(x, n)<<endl;
    return 0;
}

int luyThua(int x, int n) {
    if(n == 0)
        return 1;
    int kq = luyThua(x, n-1);
    return x * kq;
}