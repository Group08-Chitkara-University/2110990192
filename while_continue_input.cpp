#include <iostream>
using namespace std;

int main(){
    cout << "Enter starting number: ";
    int i;
    cin >> i;

    cout << "Enter last number: ";
    int j;
    cin >> j;

    cout << "Enter number to miss: ";
    int k;
    cin >> k;

    while (i<=j)
    {
        if (i==k)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}