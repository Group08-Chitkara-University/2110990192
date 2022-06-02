//A class can also be derived from one class, which is already derived from another class.

#include<iostream>
#include<string>
using namespace std;

class employee{
    public:
    string name="Anish";
    int age=19;
};
class programmer:public employee{
    public:
    int salary=45000;
};
class slave:public programmer{
    public:
    string work="Cleaning"; 
    };

int main(){
    slave infosys;
    cout << infosys.name << endl;
    cout << infosys.age << endl;
    cout << infosys.salary << endl;
    cout << infosys.work << endl;

return 0;
}