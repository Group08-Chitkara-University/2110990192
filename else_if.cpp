#include <iostream>
using namespace std;

int main(){
    int time;
    cout << "Enter your time: ";
    cin >> time;
    if (time<10){
        cout << "Good Morning.";
    }
    else if (time<20){
        cout << "Good Day.";
    }
    else{
        cout << "Good Evening.";
    }
    return 0;

}