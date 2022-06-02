#include <iostream>
using namespace std;

int main(){
    int i,j;
    cout << "Enter starting number: ";
    cin >> i;
    cout << "Enter last number: ";
    cin >> j;
    do
    {
        cout << i << endl;
        i++;
    } while (i<=j);
    return 0;
    
}