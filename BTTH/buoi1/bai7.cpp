#include <iostream>
using namespace std;

const int MAX_ROW = 5, MAX_COL = 5;

void nhapMang(int arr[MAX_ROW][MAX_COL], int r, int c);
void xuatMang(int arr[MAX_ROW][MAX_COL], int r, int c);
float tinhTrungBinhCong(int arr[MAX_ROW][MAX_COL], int r, int c);
bool timX(int arr[MAX_ROW][MAX_COL], int r, int c, int x, int &hang, int &cot);
void hoanDoi(int arr[MAX_ROW][MAX_COL], int r, int c, int a, int b);
int tichCot(int arr[MAX_ROW][MAX_COL], int r, int c, int cot);

int main()
{
    int arr[MAX_ROW][MAX_COL], r, c, x, hang, cot;
    cout<<"Nhap so hang r va so cot c cua mang: ";
    cin>>r>>c;
    nhapMang(arr, r, c);
    xuatMang(arr, r, c);
    cout<<"Trung binh cong cua mang = "<<tinhTrungBinhCong(arr, r, c)<<endl;

    cout<<"Nhap so x can tim kiem: ";
    cin>>x;
    if(timX(arr, r, c, x, hang, cot) != true) {
        cout<<"Ma tran khong co so x cần tìm\n";
    } else {
        cout<<"So can tim la so "<<x<<" o vi tri hang "<<hang<<" va vi tri cot "<<cot<<endl;
    }

    int a, b;
    cout<<"Nhap 2 so muon hoan doi vi tri: ";
    cin>>a>>b;
    if(timX(arr, r, c, x, hang, cot) != true) {
        cout<<"Ma tran khong co so can timn";
    } else {
        

        hoanDoi(arr, r, c, a, b);
        cout<<"Ma tran moi:\n";
        xuatMang(arr, r, c);
    }

    cout<<"Nhap cot muon tinh tich: ";
    cin>>cot;
    cout<<tichCot(arr, r, c, cot);
    return 0;
}

void nhapMang(int arr[MAX_COL][MAX_ROW], int r, int c) {
    do {
        if (r <= 0 || c <= 0 || r > MAX_ROW || c > MAX_COL) {
            cout << "So hang hoac so cot khong hop le! Hay nhap lai\n";
        }
    }while(r <= 0 || c <= 0 || r > MAX_ROW || c > MAX_COL);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Nhap arr[" << i << "][" << j << "]= ";
            cin >> arr[i][j];
        }
    }
}

void xuatMang(int arr[MAX_COL][MAX_ROW], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}


float tinhTrungBinhCong(int arr[MAX_COL][MAX_ROW], int r, int c) {
    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum += arr[i][j];
        }
    }
    return sum / ( r * c);
}

bool timX(int arr[MAX_ROW][MAX_COL], int r, int c, int x, int &hang, int &cot) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(arr[i][j] == x) {
                hang = i;
                cot = j;
                return true;
            }
        }
    }
    return false;
}

void hoanDoi(int arr[MAX_ROW][MAX_COL], int r, int c, int a, int b) {
    int hX, cX, hY, cY, tmp = 0;
    timX(arr, r, c, a, hX, cX); 
    timX(arr, r, c, b, hY, cY); 

    tmp = a;
    arr[hX][cX] = b;
    arr[hY][cY] = tmp;      
}

int tichCot(int arr[MAX_ROW][MAX_COL], int r, int c, int cot) {
    int tich = 1;
    for(int i = 0; i < r; i++) {
        tich *= arr[i][cot];
    }
    return tich;
}