#include<iostream>
using namespace std;

int main()
{
    int arr[3];
    int negative=0;
    int positive=0;

      cout << "Enter 3 numbers: " << endl;

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];

        if (arr[i]>=0)
        {
            positive+=1;
        }else{
            negative+=1;
        }
        
    }
    cout<<"negative numbers :"<<negative<<endl;
    cout<<"positive number :"<<positive<<endl;
    return 0;
}