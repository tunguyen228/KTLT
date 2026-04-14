#include <iostream>
#include <conio.h>  
#include <string.h> 
using namespace std;

int main() {
    char password[11];      
    char correctPass[] = "svCQ"; /
    int count = 0;       
    bool isSuccess = false;

    while (count < 3) {
        cout << "Nhap mat khau: ";
        
        int i = 0;
        char ch;
        while (true) {
            ch = getch(); 

            if (ch == 13) { // Nếu nhấn Enter
                password[i] = '\0'; 
                break;
            } 
            else if (ch == 8) { 
                if (i > 0) {
                    i--;
                    cout << "\b \b"; 
                }
            } 
            else { 
                if (i < 10) { 
                    password[i++] = ch;
                    cout << "*"; 
                }
            }
        }
        cout << endl; 

        if (strcmp(password, correctPass) == 0) {
            cout << "Dang nhap thanh cong!" << endl;
            isSuccess = true;
            break; 
        } else {
            count++;
            if (count < 3) {
                cout << "Nhap sai! Nhap lai!" << endl;
            } else {
                cout << "Ban da nhap sai qua 3 lan. Truy cap bi tu choi!" << endl;
            }
        }
    }

    return 0;
}