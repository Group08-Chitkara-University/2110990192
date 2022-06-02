#include <iostream>
using namespace std;

int main(){
    cout << "Enter starting number: ";
    int i;
    cin >> i;

    cout << "Enter last number: ";
    int j;
    cin >> j;

    cout << "Enter number to break at: ";
    int k;
    cin >> k;

    while (i<=j)
    {
        cout << i << endl;
        i++;
        if (i==k)
        {
            break;
        }
    }
    return 0;
} 