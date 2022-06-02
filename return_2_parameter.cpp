#include<iostream>
using namespace std;

int myfunc(int x,int y){
     return x+y;
}

int main(){
    int x,y;
    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    cout << "Sum of " << x << " and " << y << " is " << myfunc(4,8);  


return 0;
}