#include<iostream>
using namespace std;

int fib(int n){
    if (n<2)
    {
        return 1;
    }
    
    return fib(n-2)+fib(n-1);
}

int main(){
    int n;
    cout << "Enter a position: ";
    cin >> n;

    cout << "The fibonacci number at position " << n << " is " << fib(n);

return 0;
}