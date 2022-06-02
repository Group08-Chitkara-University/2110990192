#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter your  number: ";
    cin >> x;
    if (x<20){
        cout << "Chhoti soch";
    }
    else if (x<60){
        cout << "Almost there";
    }
    else{
        cout << "Ye hui na baat";        
    } 
    return 0;
    
}