#include <iostream>
using namespace std;

int main(){
    int j;
    cout << "Enter start number: ";
    cin >> j;

    int k;
    cout << "Enter number at break: ";
    cin >> k;

    int l;
    cout << "Enter last number: ";
    cin >> l;

    for (int i = j; i <= l; i++)
    {
        if (i==k)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}