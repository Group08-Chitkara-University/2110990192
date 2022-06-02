#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: \n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter an element: ";
        cin >> arr[i];
    }
    cout << "Elements are: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}