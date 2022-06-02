#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,m;
    cout << "Enter rows: ";
    cin >> n;
    cout << "Enter columns: ";
    cin >> m;
    int arr1[n][m];
    int arr2[n][m];

    cout << "Enter the elements of matrix 1: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
        
    }
    cout << "Enter the elements of matrix  2: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr2[i][j];
        }
        
    }
    cout << "Sum of 2 arrays is: \n";
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum=arr1[i][j]+arr2[i][j];
        }
        
    }
    

    
    
    return 0;
}