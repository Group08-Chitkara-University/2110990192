#include<iostream>
using namespace std;
void myfunction(){ //Creating a function
    cout << "I just got executed!\n"; //Code to be executed 
}
int main(){
    myfunction(); //Calling a function 
    myfunction();  
    myfunction(); //A function can be called multiple times
    myfunction(); 
              

return 0;
}