#include <iostream>
using namespace std;

int thucHienDao(int n, int rev);
int soDaoNguoc(int n);

int main() {
    int n;
    cout << "Nhap so nguyen khong am: ";
    cin >> n;
    cout << "So dao nguoc cua " << n << " la: " << soDaoNguoc(n) << endl;

    return 0;
}

int thucHienDao(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    int chuSoCuoi = n % 10;
    int kq = rev * 10 + chuSoCuoi;
    return thucHienDao(n / 10, kq);
}

int soDaoNguoc(int n) {
    if (n == 0) 
        return 0;
    return thucHienDao(n, 0);
}