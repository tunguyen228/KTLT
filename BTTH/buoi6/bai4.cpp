#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
const int MAX = 10;

int main() {
    int n;
    int arr[MAX];
    ifstream inFile("array.txt");
    if(inFile.is_open()) {
        inFile >> n;
        for(int i = 0; i < n; i++) {
            inFile>>arr[i];
            if(i < n - 1) {
                char tmp;
                inFile>>tmp;
            }
        }
        inFile.close();
    }
    sort(arr, arr + n);
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