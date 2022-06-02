#include<iostream>
#include<string>
using namespace std;
void myfunction(string fname){  //fname is a parameter-Parameters act as variables inside the function
    cout << fname << " Chopra\n";
}
int main(){
    myfunction("Karl");  
    myfunction("John");     //Karl, John and Jenny are arguments
    myfunction("Jenny");


return 0;
}