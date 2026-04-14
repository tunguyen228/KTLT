#include <iostream>
using namespace std;

int pascal(int n, int k);
void xuatTamGiac(int chieuCao, int hangHienTai = 0);

int main() {
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    xuatTamGiac(n);
    return 0;
}

int pascal(int n, int k) {
    if(k == n || k == 0)
        return 1;
    return pascal(n-1, k-1) + pascal(n -1, k);
}

void xuatTamGiac(int chieuCao, int hangHienTai) {
    if (hangHienTai >= chieuCao) {
        return;
    }
    for (int k = 0; k <= hangHienTai; k++) {
        cout << pascal(hangHienTai, k) << " ";
    }
    cout << endl;
    xuatTamGiac(chieuCao, hangHienTai + 1);
}