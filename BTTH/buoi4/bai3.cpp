#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool Palindrome(char *s);
int main() {
    char str[50];

    cout<<"Nhap chuoi: ";
    cin>>str;

    if(Palindrome(str)) {
        cout<<"Chuoi "<<str<<" la chuoi doi xung\n";
    } else {
        cout<<"Chuoi "<<str<<" khong phai la chuoi doi xung\n";
    }

    return 0;
}

bool Palindrome(char *s) {
    char *right = s;
    char *left = s + strlen(s) - 1;
    while(right < left) {
        if(tolower(*right) != tolower(*left)) {
            return false;
        }
        right++;
        left--;
    }
    return true;
}