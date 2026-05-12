#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
const int MAX = 10;

double avg(int arr[MAX], int pos);

int main() {
    srand(time(0));
    int arr[MAX];
    int pos = MAX -1;
    for(int i = 0; i < MAX; i++) {
        arr[i] = rand() % 20;
    }
    for(int i = 0; i < MAX; i++) {
        cout<<setw(3)<<arr[i];
    }
    cout<<endl;
    cout<<"Trung binh cong cua mang = "<<avg(arr, pos);

    return 0;
}

double avg(int arr[MAX], int pos) {
    if(pos == 0)
        return arr[pos]/(double)MAX;
    return arr[pos]/(double)MAX + avg(arr, pos - 1);
}