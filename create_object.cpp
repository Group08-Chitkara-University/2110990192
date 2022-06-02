#include<iostream>
#include <string>
using namespace std;

class fruit{   //The class---The class keyword is used to create a class called MyClass.
    public:    //access specifier---which specifies that members (attributes and methods) of the class are accessible from outside the class. 
    string colour;   //Attribute (string variable)
    int days;        //Attribute (int variable)
    };

int main(){
    fruit Apple;  // Create an object of MyClass

    // Access attributes and set values
    Apple.colour="red";   
    Apple.days=9;

    // Print attribute values
    cout << Apple.colour << endl;
    cout <<Apple.days;
    

    

return 0;
}