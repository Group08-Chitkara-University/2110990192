#include<iostream>
using namespace std;

int main() {

    int arr[3], i, seven = 0, sodd = 0;

    cout << "Enter 3 numbers:";
    for (i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < 3; i++) {
        if (arr[i] % 2 == 0) {
            seven = seven + arr[i];
        } else {
            sodd = sodd + arr[i];
        }
    }

    cout << "Sum of even:" << seven << endl;
    cout << "Sum of odd:" << sodd;

    return 0;
}