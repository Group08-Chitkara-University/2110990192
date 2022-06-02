#include <iostream>
using namespace std;

int main(){
    int j;
    cout << "Enter starting number: ";
    cin >> j;
    
    int k;
    cout << "Enter number to miss: ";
    cin >> k;

    int l;
    cout << "Enter last number: ";
    cin >> l;

    for (int i = j; i < l; i++)
    {
        if (i==k)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}