#include <iostream>
#include <string>
using namespace std;

struct car
{
    string brand;
    string model;
    int year;
};

int main(){
    car MyCar1;
    MyCar1.brand="Chevrolet";
    MyCar1.model="Camaro";
    MyCar1.year=1969;

    car MyCar2;
    MyCar2.brand="Ford";
    MyCar2.model="Mustang";
    MyCar2.year=1969;

    cout << MyCar1.brand << " " << MyCar1.model << " " << MyCar1.year << endl;
    cout << MyCar2.brand << " " << MyCar2.model << " " << MyCar2.year << endl;



return 0;
}