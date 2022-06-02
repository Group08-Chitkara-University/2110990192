// Program to check armstrong number

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int originalnum = n;
    int sum = 0;
    while (originalnum != 0)
    {
        int lastdigit = originalnum % 10;         // Access all digits separately. remainder contains the last digit.
        sum += lastdigit * lastdigit * lastdigit; // A digit is added each time a loop iterates.
        originalnum /= 10;                        // Remove last digit from originalnum.
    }
    if (sum == n)
    {
        cout << n << " is an armstrong number.";
    }
    else
    {
        cout << n << " is not an armstrong number.";
    }

    return 0;
}