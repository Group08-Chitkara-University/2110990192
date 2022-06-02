#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    int sum=0;
    float avg=0;

    cout << "Enter 3 numbers: " << endl;

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        sum=sum+arr[i];
    }
      avg=sum/2;

    cout<<"sum: "<<sum<<endl;
    cout<<"average: "<<avg<<endl;
    return 0;
}