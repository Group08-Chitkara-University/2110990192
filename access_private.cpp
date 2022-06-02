#include<iostream>
using namespace std;

class employee
{
private:
    int salary;
public:
//To access private use set and get. Set a variable for salary in setSalary function/method and return it in getSalary function/method.
    void setSalary(int s){          
        salary=s;
    }
    int getSalary(){
        return salary;

    }
};
// The salary attribute is private, which have restricted access.

// The public setSalary() method takes a parameter (s) and assigns it to the salary attribute (salary = s).

// The public getSalary() method returns the value of the private salary attribute.

// Inside main(), we create an object of the Employee class. Now we can use the setSalary() method to set the value of the private attribute to 50000. Then we call the getSalary() method on the object to return the value.

int main(){
    employee myObj;
    myObj.setSalary(50000); //use setSalary to call private data.
    cout << myObj.getSalary(); 

return 0; 
}