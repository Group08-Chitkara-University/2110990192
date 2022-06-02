#include<iostream>
#include<string>
using namespace std;

//Base class
class vehicles{
    public:
    string brand="Ford";
    void honk(){
        cout << "tuut tuut!\n";
    }
};
//Derived class
class car : public vehicles{
    public:
    string model="Mustang";
};

int main(){
    car mycar;   
    mycar.honk();
    cout << mycar.brand << " " << mycar.model; 

return 0;
}