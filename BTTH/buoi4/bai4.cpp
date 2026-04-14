#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void daoChuoi(char *s);
int demSoTu(char *s);
void chuanHoa(char *s);

int main() {
    char str[50];
    cout<<"Nhap vao 1 chuoi: ";
    cin.getline(str, 50);

    cout<<"Chuoi sau khi chuan hoa: ";
    chuanHoa(str);
    cout<<str<<endl;

    cout<<"So tu trong chuoi: "<<demSoTu(str)<<endl;

    cout<<"Chuoi sau khi dao: ";
    daoChuoi(str);
    cout<<str<<endl;



    return 0;
}

void daoChuoi(char *s) {
    char *left = s;
    char *right = s + strlen(s) - 1;
    while(left < right) {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        right--;
        left++;
    }
}

int demSoTu(char *s) {
    int count = 0;
    bool tu1 = false;
    char *p = s;
    while(*p != '\0') {
        if(isalpha(*p)) {
            if(!tu1) {
                count++;
                tu1 = true;
            }
        } else  if(isspace(*p)){
            tu1 = false;
        }
        p++;
    }
    return count;
}

void chuanHoa(char *s){
    bool tu = true;
    for(int i = 0; s[i] != '\0'; i++) {
        if(!isspace(s[i])) {
            if(tu) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
            tu = false;
        } else {
            tu = true;
        }
    }

    bool tu2 = true;
    int j = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(!isspace(s[i])) {
            s[j++] = s[i];
            tu2 = false;
        } else {
            if(!tu2) {
                s[j++] = ' ';
                tu2 = true;
            }
        }
    }
    if(j > 0 && s[j-1] == ' ') {
        j--;
    }
    s[j] ='\0';
}