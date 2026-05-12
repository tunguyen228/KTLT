#include <iostream>
using namespace std;

int xMuN(int x, int n);

int main() {
    int x, n;
    cout<<"Nhap so nguyen x: ";
    cin>>x;
    cout<<"Nhap so mu n: ";
    cin>>n;
    cout<<x<< "^"<<n<<" = "<<xMuN(x, n)<<endl;
    return 0;
}

int xMuN(int x, int n) {
    if(n == 0)
        return 1;
    if(n == 1)
        return x;
    return x * xMuN(x, n - 1);
}