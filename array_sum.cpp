#include<iostream>
using namespace std;

int main() {

    int arr[3], i, sum = 0;

    cout << "Enter any 3 numbers:";
    for (i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < 3; i++) {
        sum = sum + arr[i];
    }
    cout << "Sum of all elements:" << sum;

    return 0;
}