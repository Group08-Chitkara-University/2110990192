#include<iostream>
#include<string>
using namespace std;

int myfunc(int x){
    return x+5;
    
    
}

int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Sum of 5 and " << x <<" is " << myfunc(x); 

return 0;
}