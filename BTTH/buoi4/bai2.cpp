#include <iostream>
#include <string>
using namespace std;
#define SIZE 256

int main() {
    string s1;
    cout<<"Nhap chuoi: ";
    getline(cin, s1);
    
    int arr[SIZE] ={0};
    for(int i = 0; i < s1.length(); i++) {
        if(!isalpha(s1[i])) {
            arr[s1[i]]++;
        } else {
            if(islower(s1[i])) {
                arr[s1[i]-32]++;
            }else {
                arr[s1[i]]++;
            }
        }
    }
    for(int i = 0; i < SIZE; i++) {
        if(arr[i] > 0 && i != 32) {
            cout<<"Ky tu "<<char(i)<<" xuat hien "<<arr[i]<<" lan"<<endl;
        }
    }
    return 0;
}