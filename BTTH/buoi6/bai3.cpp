#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
const int MAX = 10;

int main() {
    int n;
    int arr[MAX];
    cout<<"Nhap so nguyen n: ";
    cin>>n;

    srand(time(0));
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 49 + 1;
    }

    ofstream outFile("array.txt");
    if(outFile.is_open()) {
        outFile<<n<<endl;
        for(int i = 0; i < n; i++) {
            outFile<<arr[i];
            if(i < n - 1) {
                outFile<<", ";
            }
        }
        outFile.close();
    }
    return 0;
}