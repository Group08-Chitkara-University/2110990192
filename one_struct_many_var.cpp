#include<iostream>
#include<string>
using namespace std;
int main(){
    struct 
    {
        string brand;
        string model;
        int year;

    }car1,car2;

    car1.brand="BMW";
    car1.model="M3 GTR";
    car1.year=2005;

    car2.brand="Porsche";
    car2.model="Carrera";
    car2.year=2007;

    cout << car1.brand << " " << car1.model << " " << car1.year << endl;
    cout << car2.brand << " " << car2.model << " " << car2.year << endl;
    
    

return 0;
}