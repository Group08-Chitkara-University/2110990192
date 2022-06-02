#include<iostream>
 
using namespace std;
 
int main()
{
    int a[5][5],largest=1,n,m,i,j;
    cout<<"Enter no of rows and columns(max 5):";
    cin>>m>>n;
    cout<<"Enter the array:\n";
 
    for(i=0;i<m;i++)
        for(j=0;j<n;++j)
            cin>>a[i][j];
 
    for(i=0;i<m;++i)
        for(j=0;j<n;++j)
        {
            if(a[i][j]>largest)
                largest=a[i][j];
        }

    cout<<"\nLargest number:"<<largest;
    
 
    return 0;
}