#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements are: \n";
    int sum = 1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
        sum = sum + arr[i];
    }
    cout << "Sum of array is: " << sum;

    return 0;
}